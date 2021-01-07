#ifndef ADDFLIGHT_H
#define ADDFLIGHT_H

#include <QDialog>

class Flight;

namespace Ui {
class AddFlight;
}

class AddFlight : public QDialog
{
    Q_OBJECT

public:

    enum Type { Create, Edit };
    explicit AddFlight(Flight *flight, const QList<Flight> &listFlight, Type type, QWidget *parent = nullptr);
    ~AddFlight();

private:
    Ui::AddFlight *mUi;
    QString m_startNumberFlight;
    Flight *my_fly;
    const QList<Flight> &m_listflight;

public slots:
    void accept();
private slots:

};

#endif // ADDFLIGHT_H

