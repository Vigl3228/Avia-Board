#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <kabinet.h>
#include <ManageFlight.h>
#include <flight.h>
#include <ManageUsers.h>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"

MainWindow::MainWindow(User &user, QWidget *parent) :
    QWidget(parent),
    mUi(new Ui::MainWindow),
    m_user(user)
{
    mUi->setupUi(this);
    mUi->Board_flight->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);

    m_infoDialog = new InfoUser(m_user, this);
    m_infoDialog->setWindowTitle(Config::nameApplication);

    if (m_user.status() == User::Dispatcher)
        mUi->controlusers->hide();
    if (m_user.status() == User::Passenger)
    {
        mUi->controlflight->hide();
        mUi->controlusers->hide();
    }

    loadFlights();
    mUi->Board_flight->sortByColumn(3,Qt::AscendingOrder);
}

MainWindow::~MainWindow()
{
    delete mUi;
    delete m_infoDialog;
    delete &m_user;
}

void MainWindow::on_controlflight_clicked()
{    
    const QList<Flight> &listFlight = qobject_cast<MainWindow*>(this)->listFlight();
    ManageFlight dialog(listFlight, this);
    dialog.setWindowTitle(windowTitle());
        connect(&dialog, SIGNAL(addFlight(Flight)),
                this, SLOT(addFlight(Flight)));

        connect(&dialog, SIGNAL(editFlight(int, Flight)),
                this, SLOT(editFlight(int, Flight)));

        connect(&dialog, SIGNAL(deleteFlight(int)),
                this, SLOT(deleteFlight(int)));
    dialog.exec();
    mUi->Board_flight->sortByColumn(3,Qt::AscendingOrder);
}

void MainWindow::on_controlusers_clicked()
{
    ManageUsers dialog(this);
    dialog.setWindowTitle(windowTitle());
    dialog.show();
    dialog.exec();
}

void MainWindow::on_infoUser_clicked()
{
    if (m_infoDialog->exec() == QDialog::Accepted)
         emit changeUser();
}

void MainWindow::addFlight(Flight flight)
{
    m_listFlight.append(flight);

    QFile file(Config::Flightbin);
    file.open(QIODevice::Append);
    QDataStream ost(&file);
    ost << flight;
    QTableWidgetItem *it_numb = new QTableWidgetItem(flight.get_number());
    QTableWidgetItem *it_sch_arr_time = new QTableWidgetItem(flight.sch_arr_time().toString("hh:mm"));
    QTableWidgetItem *it_exp_time = new QTableWidgetItem(flight.exp_time().toString("hh:mm"));
    QTableWidgetItem *it_AirK = new QTableWidgetItem(flight.AirK());
    QTableWidgetItem *it_destination= new QTableWidgetItem(flight.destination());
    QTableWidgetItem *it_status= new QTableWidgetItem(flight.stat());
    int row = mUi->Board_flight->rowCount();
    mUi->Board_flight->insertRow(row);
    mUi->Board_flight->setItem(row, 0, it_numb);
    mUi->Board_flight->setItem(row, 1, it_AirK);
    mUi->Board_flight->setItem(row, 2, it_destination);
    mUi->Board_flight->setItem(row, 3, it_sch_arr_time );
    mUi->Board_flight->setItem(row, 4, it_exp_time );
    mUi->Board_flight->setItem(row, 5, it_status);
}

void MainWindow::editFlight(int row, Flight flight)
{
    m_listFlight[row] = flight;
    QFile file(Config::Flightbin);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("flight_file");
        write_file.open(QIODevice::WriteOnly);
        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countSeats = 0;
        while (!read_ist.atEnd())
        {
            Flight bFlight;
            read_ist >> bFlight;

            if (countSeats++ == row)
            {
                bFlight = flight;
            }

            write_ist << bFlight;
        }
        file.close();
        file.remove();
        write_file.close();
        write_file.rename(Config::Flightbin);
    }
    mUi->Board_flight->item(row, 0)->setText(flight.get_number());
    mUi->Board_flight->item(row, 1)->setText(flight.AirK());
    mUi->Board_flight->item(row, 2)->setText(flight.destination());
    mUi->Board_flight->item(row, 3)->setText(flight.sch_arr_time().toString("hh:mm"));
    mUi->Board_flight->item(row, 4)->setText(flight.exp_time().toString("hh:mm") );
    mUi->Board_flight->item(row, 5)->setText(flight.stat());
}

void MainWindow::deleteFlight(int row)
{
    m_listFlight.removeAt(row);
    QFile file(Config::Flightbin);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("flight_file");
        write_file.open(QIODevice::WriteOnly);

        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countReads = 0;
        while (!read_ist.atEnd())
        {
            Flight bFlight;
            read_ist >> bFlight;
            if (countReads++ != row)
            {
                write_ist << bFlight;
            }
        }
        file.close();
        file.remove();
        write_file.close();
        write_file.rename(Config::Flightbin);
    }
    mUi->Board_flight->removeRow(row);
}

const QList<Flight> &MainWindow::listFlight() const
{
    return m_listFlight;
}

void MainWindow::loadFlights()
{
    m_listFlight.clear();
    QFile file(Config::Flightbin);
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream ist(&file);
        while (!ist.atEnd()) {
            Flight flight;
            ist >> flight;
            m_listFlight.append(flight);
        }
    }

    int row = 0;
    foreach (const Flight &flight, m_listFlight) {

        QTableWidgetItem *it_num = new QTableWidgetItem(flight.get_number());
        QTableWidgetItem *it_depart  = new QTableWidgetItem(flight.AirK());
        QTableWidgetItem *it_destinat  = new QTableWidgetItem(flight.destination());
        QTableWidgetItem * it_exp_time= new QTableWidgetItem(flight.exp_time ().toString("hh:mm"));
        QTableWidgetItem *it_sch_arr_time= new QTableWidgetItem(flight.sch_arr_time().toString("hh:mm"));
        QTableWidgetItem *it_stat= new QTableWidgetItem(flight.stat());

        mUi->Board_flight->insertRow(row);
        mUi->Board_flight->setItem(row, 0, it_num);
        mUi->Board_flight->setItem(row, 1, it_depart );
        mUi->Board_flight->setItem(row, 2, it_destinat );
        mUi->Board_flight->setItem(row, 3, it_sch_arr_time);
        mUi->Board_flight->setItem(row, 4, it_exp_time );
        mUi->Board_flight->setItem(row, 5, it_stat);

        row++;
    }
}
