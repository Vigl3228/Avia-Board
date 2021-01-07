/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *Board_flight;
    QPushButton *infoUser;
    QPushButton *controlusers;
    QPushButton *controlflight;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(743, 513);
        gridLayout = new QGridLayout(MainWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MainWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        Board_flight = new QTableWidget(MainWindow);
        if (Board_flight->columnCount() < 6)
            Board_flight->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Board_flight->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        Board_flight->setObjectName(QString::fromUtf8("Board_flight"));
        Board_flight->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Board_flight->setSelectionBehavior(QAbstractItemView::SelectRows);
        Board_flight->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(Board_flight);

        infoUser = new QPushButton(MainWindow);
        infoUser->setObjectName(QString::fromUtf8("infoUser"));
        QFont font1;
        font1.setPointSize(12);
        infoUser->setFont(font1);
        infoUser->setCursor(QCursor(Qt::PointingHandCursor));
        infoUser->setMouseTracking(false);
        infoUser->setStyleSheet(QString::fromUtf8(""));
        infoUser->setCheckable(false);
        infoUser->setAutoRepeat(false);

        verticalLayout->addWidget(infoUser);

        controlusers = new QPushButton(MainWindow);
        controlusers->setObjectName(QString::fromUtf8("controlusers"));
        controlusers->setFont(font1);
        controlusers->setCursor(QCursor(Qt::PointingHandCursor));
        controlusers->setMouseTracking(false);
        controlusers->setCheckable(false);
        controlusers->setAutoRepeat(false);

        verticalLayout->addWidget(controlusers);

        controlflight = new QPushButton(MainWindow);
        controlflight->setObjectName(QString::fromUtf8("controlflight"));
        controlflight->setFont(font1);
        controlflight->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(controlflight);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "mainwindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\276 \320\260\320\262\320\270\320\260\321\200\320\265\320\271\321\201\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Board_flight->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Board_flight->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\262\320\270\320\260\320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Board_flight->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Board_flight->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260 \320\277\321\200\320\276 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\216", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Board_flight->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\266\320\270\320\264\320\260\320\265\320\274\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Board_flight->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
#if QT_CONFIG(whatsthis)
        Board_flight->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\242\320\260\320\261\320\273\320\276 \320\260\320\262\320\270\320\260\321\200\320\265\320\271\321\201\320\276\320\262. \320\227\320\264\320\265\321\201\321\214 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\321\202\321\201\321\217 \320\262\321\201\321\217 \320\270\320\274\320\265\321\216\321\211\320\265\321\216\321\201\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\200\320\265\320\271\321\201\320\260\321\205 \321\201 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265\320\274. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        infoUser->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\264\320\265\321\201\321\214 \320\274\320\276\320\266\320\275\320\276 \321\201\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202 \320\270\320\273\320\270 \320\277\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\277\320\276 \320\273\320\270\321\207\320\275\320\276\320\274\321\203 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\321\203, \321\202.\320\265. \320\273\320\276\320\263\320\270\320\275 \320\270 \321\201\321\202\320\260\321\202\321\203\321\201. \320\224\320\260\320\275\320\275\320\276\320\265 \320\276\320\272\320\275\320\276 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \320\262\321\201\320\265\320\274 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217\320\274</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        infoUser->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
#if QT_CONFIG(whatsthis)
        controlusers->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\260\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202<span style=\" font-weight:600;\"> \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260\320\274 </span>\320\264\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214, \320\270\320\267\320\274\320\265\320\275\321\217\321\202\321\214, \320\277\320\276\320\273\321\203\321\207\320\260\321\202\321\214 \320\270\320\273\320\270 \321\203\320\264\320\260\320\273\321\217\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276\320\261 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        controlusers->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217\320\274\320\270", nullptr));
#if QT_CONFIG(whatsthis)
        controlflight->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\260\320\275\320\275\320\276\320\265 \320\276\320\272\320\275\320\276 \320\277\320\267\320\262\320\276\320\273\321\217\320\265\321\202 <span style=\" font-weight:600;\">\320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260\320\274</span> \320\270 <span style=\" font-weight:600;\">\320\264\320\270\321\201\320\277\320\265\321\202\321\207\320\265\321\200\320\260\320\274</span> \320\270\320\267\320\274\320\265\320\275\321\217\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\200\320\265\320\271\321\201\320\260\321\205. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        controlflight->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\265\320\271\321\201\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
