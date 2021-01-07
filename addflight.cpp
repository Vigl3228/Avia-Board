#include "config.h"
#include "flight.h"
#include "addflight.h"
#include "ui_addflight.h"
#include <QComboBox>

AddFlight::AddFlight(Flight *flight, const QList<Flight> &listFlight, Type type, QWidget *parent) :
    QDialog(parent),
    mUi(new Ui::AddFlight),
    my_fly(flight),
    m_listflight(listFlight)
{
    mUi->setupUi(this);
    m_startNumberFlight = flight->get_number();
    if (type == Edit)
    {
        mUi->label_7->setText("Редактирование");
        mUi->Number->setText(my_fly->get_number());
        mUi->time_1->setTime(my_fly->sch_arr_time());
        mUi->time_2->setTime(my_fly->exp_time());
        mUi->Otpr->setText(my_fly->AirK());
        mUi->Nazn->setText(my_fly->destination());
        mUi->Status_box->setCurrentText(my_fly->stat());
    }

    else
    {
        mUi->label_7->setText("Добавление");
    }

}


AddFlight::~AddFlight()
{
    delete mUi;
}

void AddFlight::accept()
{
    mUi->error->clear();

    int row = mUi->Status_box->currentIndex();
    QString status2;
            switch(row)
            {
            case 1:
                status2="Отложен";
                break;
            case 2:
                 status2="Вылетел";
                break;
            case 3:
                status2="Прибыл";
                break;
            }

    QString number = mUi->Number->text();
    QTime sch_arr_time = mUi->time_1->time();
    QString status = status2;
    QTime exp_time = mUi->time_2->time();
    QString AirK = mUi->Otpr->text();
    QString destination = mUi->Nazn->text();

    if (number.isEmpty() ||
        destination.isEmpty()||
        AirK.isEmpty() ||
        status2.isEmpty())
    {
        mUi->error->setText("Заполните все поля!");
    }
    else
    {
        my_fly->setData(number, sch_arr_time, exp_time, AirK, destination, status);
        QDialog::accept();
    }
}


