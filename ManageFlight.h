#ifndef MANAGEFLIGHT_H
#define MANAGEFLIGHT_H

#include <QDialog>
#include "flight.h"

namespace Ui {
class ManageFlight;
}
class ManageFlight : public QDialog
{
    Q_OBJECT

public:
    explicit ManageFlight(const QList<Flight> &listFlight, QWidget *parent = nullptr);
    ~ManageFlight();

private slots:
    void on_lineFind_textChanged(const QString &arg1);
    void on_add_clicked();
    void on_del_clicked();
    void on_edit_clicked();

private:
    Ui::ManageFlight *mUi;

    const QList<Flight> &m_listFlight;

signals:    
    void addFlight(Flight);
    void editFlight(int, Flight);
    void deleteFlight(int);

};



#endif // MANAGEFLIGHT_H


