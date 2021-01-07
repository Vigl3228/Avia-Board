#ifndef FLIGHT_H
#define FLIGHT_H

#include <QString>
#include <QDate>
#include <QTime>
#include "users.h"
#include <QDataStream>
#include <QTextStream>

class Flight
{
public:
    Flight();
    Flight(QString get_number, const QTime sch_arr_time, const QTime exp_time ,
           const QString AirK, const QString destination, const QString stat);
    void setData(QString get_number, const QTime sch_arr_time, const QTime exp_time,
                 const QString AirK, const QString destination, const QString stat);

    QString get_number() const;
    QTime sch_arr_time() const;
    QTime exp_time() const;
    QString AirK() const;
    QString destination() const;
    QString stat() const;

    void setNumber(const QString &get_number);
    void setScheduled_arrival_time(const QTime &sch_arr_time);
    void setExpected_time(const QTime &exp_time);
    void setAirK(const QString &AirK);
    void setDDestination(const QString &destination);
    void setSStatus(const QString &stat);


private:
    QString my_num;
    QTime my_sch_arr_time;
    QTime my_exp_time;
    QString my_air;
    QString my_destinat;
    QString my_stat;
};

inline QDataStream &operator<< (QDataStream &ost, const Flight &flight)
{
    ost << flight.get_number() << flight.sch_arr_time() << flight.exp_time() << flight.AirK() << flight.destination() << flight.stat();
    return ost;
}
inline QDataStream &operator>> (QDataStream &ist, Flight &flight)
{
    QString number;
    QTime scheduled_arrival_time;
    QTime expected_time;
    QString AirK;
    QString destination;
    QString status;

    ist >> number >> scheduled_arrival_time >> expected_time >> AirK >> destination >> status;
    flight.setData(number, scheduled_arrival_time, expected_time, AirK, destination, status);
    return ist;
}


#endif // FLIGHT_H
