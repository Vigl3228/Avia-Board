#include "flight.h"

Flight::Flight(QString number, const QTime scheduled_arrival_time, const QTime expected_time,
    const QString AirK, const QString destination, const QString status)
{
    setData(number, scheduled_arrival_time, expected_time, AirK, destination, status);
}

void Flight::setData(QString number, const QTime sch_arr_time, const QTime exp_time,
    const QString AirK, const QString destination, const QString status)
{
    my_num = number;
    my_sch_arr_time = sch_arr_time;
    my_exp_time = exp_time;
    my_air = AirK;
    my_destinat = destination;
    my_stat = status;
}

Flight::Flight()
{
     my_num = "";
     my_air = "";
}

void Flight::setNumber(const QString &number)
{
    my_num = number;
}


QTime Flight::sch_arr_time() const
{
    return my_sch_arr_time;
}

void Flight::setAirK(const QString &AirK)
{
    my_air = AirK;
}

QString Flight::get_number() const
{
    return my_num;
}

void Flight::setScheduled_arrival_time(const QTime &scheduled_arrival_time)
{
    my_sch_arr_time = scheduled_arrival_time;
}

QTime Flight::exp_time() const
{
    return my_exp_time;
}

void Flight::setExpected_time(const QTime &expected_time)
{
    my_exp_time = expected_time;
}

QString Flight::destination() const
{
    return my_destinat;
}

void Flight::setDDestination(const QString &destination)
{
    my_destinat = destination;
}

QString Flight::Stat() const
{
    return my_stat;
}

QString Flight::AirK() const
{
    return my_air;
}

void Flight::setSStatus(const QString &status)
{
    my_stat = status;
}
