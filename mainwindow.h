#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include "users.h"
#include <flight.h>
#include <QTableWidgetItem>
class InfoUser;

namespace Ui {
class MainWindow;
}
class MainWindow : public QWidget
{
    Q_OBJECT

public:

    explicit MainWindow(User &user, QWidget *parent = nullptr);
    ~MainWindow();

    const QList<Flight> &listFlight() const;

public slots:

    void addFlight(Flight flight);
    void editFlight(int row, Flight flight);
    void deleteFlight(int row);

private slots:

    void on_infoUser_clicked();
    void on_controlflight_clicked();
    void on_controlusers_clicked();


signals:
    void changeUser();


private:
    Ui::MainWindow *mUi;
    User &m_user;
    InfoUser *m_infoDialog;
    QList<Flight> m_listFlight;
    void loadFlights();

};
#endif // MAINWINDOW_H

