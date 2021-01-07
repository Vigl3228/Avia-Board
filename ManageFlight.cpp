#include "ManageFlight.h"
#include "ui_ManageFlight.h"
#include "config.h"
#include <addflight.h>
#include <QMessageBox>
#include <QFile>
#include <QDataStream>
#include <mainwindow.h>
#include <QTimeEdit>
#include <QTime>

ManageFlight::ManageFlight(const QList<Flight> &listFlight, QWidget *parent) :
    QDialog(parent),
    mUi(new Ui::ManageFlight),
    m_listFlight(listFlight)
{
    mUi->setupUi(this);
    mUi->TableFlight->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);

    int row = 0;
    foreach (const Flight &flight, m_listFlight)
    {
        QTableWidgetItem *item_number = new QTableWidgetItem(flight.get_number());
        QTableWidgetItem *item_AirK = new QTableWidgetItem(flight.AirK());
        QTableWidgetItem *item_destination= new QTableWidgetItem(flight.destination());
        QTableWidgetItem *item_expected_time = new QTableWidgetItem(flight.exp_time().toString("hh:mm"));
        QTableWidgetItem *item_scheduled_arrival_time = new QTableWidgetItem(flight.sch_arr_time().toString("hh:mm"));
        QTableWidgetItem *item_status= new QTableWidgetItem(flight.stat());

        mUi->TableFlight->insertRow(row);
        mUi->TableFlight->setItem(row, 0, item_number);
        mUi->TableFlight->setItem(row, 1, item_AirK );
        mUi->TableFlight->setItem(row, 2, item_destination );
        mUi->TableFlight->setItem(row, 3,  item_scheduled_arrival_time);
        mUi->TableFlight->setItem(row, 4, item_expected_time );
        mUi->TableFlight->setItem(row, 5, item_status);
        row++;
    }
}

ManageFlight::~ManageFlight()
{
    delete mUi;
}

void ManageFlight::on_lineFind_textChanged(const QString &text)
{
    QStringList listStr = text.split(" ");
    listStr.removeAll(QString());
    for (int i = 0; i < m_listFlight.size(); i++)
    {
        mUi->TableFlight->showRow(i);
    }
    int row = 0;
    foreach (const Flight &flight, m_listFlight)
    {
        int count = 0;
        foreach (const QString &str, listStr)
        {
            if (flight.get_number().contains(str) ||
                flight.AirK().contains(str))
            {
                count++;
            }
        }
        if (count != listStr.size())
        {
            mUi->TableFlight->hideRow(row);
        }
        row++;
    }
}

void ManageFlight::on_add_clicked()
{
    Flight flight;
    AddFlight dialog(&flight, m_listFlight, AddFlight::Create, this);
    dialog.setWindowTitle(windowTitle());
    if (dialog.exec() == QDialog::Accepted)
    {
        emit addFlight(flight);
        QTableWidgetItem *item_number = new QTableWidgetItem(flight.get_number());
        QTableWidgetItem *item_AirK = new QTableWidgetItem(flight.AirK());
        QTableWidgetItem *item_destination= new QTableWidgetItem(flight.destination());
        QTableWidgetItem *item_scheduled_arrival_time = new QTableWidgetItem(flight.sch_arr_time().toString("hh:mm"));
        QTableWidgetItem *item_expected_time = new QTableWidgetItem(flight.exp_time().toString("hh:mm"));
        QTableWidgetItem *item_status= new QTableWidgetItem(flight.stat());
        int row = mUi->TableFlight->rowCount();
        mUi->TableFlight->insertRow(row);
        mUi->TableFlight->setItem(row, 0, item_number);
        mUi->TableFlight->setItem(row, 1, item_AirK );
        mUi->TableFlight->setItem(row, 2, item_destination );
        mUi->TableFlight->setItem(row, 3, item_scheduled_arrival_time);
        mUi->TableFlight->setItem(row, 4, item_expected_time  );
        mUi->TableFlight->setItem(row, 5, item_status);
    }
}

void ManageFlight::on_del_clicked()
{
    int currentRow = mUi->TableFlight->currentRow();
    if (currentRow != -1)
    {
        emit deleteFlight(currentRow);
        mUi->TableFlight->removeRow(currentRow);
    }
    else
    {
        QMessageBox::warning(this, windowTitle(), "Не выбран ни один рейс!");
    }
}

void ManageFlight::on_edit_clicked()
{
    int currentRow = mUi->TableFlight->currentRow();
    if (currentRow != -1)
    {
        Flight flight = m_listFlight[currentRow];
        AddFlight dialog(&flight, m_listFlight, AddFlight::Edit, this);
        dialog.setWindowTitle(windowTitle());
        if (dialog.exec() == QDialog::Accepted)
        {
            emit editFlight(currentRow, flight);
            mUi->TableFlight->item(currentRow, 0)->setText(flight.get_number());
            mUi->TableFlight->item(currentRow, 1)->setText(flight.AirK());
            mUi->TableFlight->item(currentRow, 2)->setText(flight.destination());
            mUi->TableFlight->item(currentRow, 3)->setText(flight.sch_arr_time().toString("hh:mm") );
            mUi->TableFlight->item(currentRow, 4)->setText(flight.exp_time().toString("hh:mm"));
            mUi->TableFlight->item(currentRow, 5)->setText(flight.stat());
        }
    }
}
