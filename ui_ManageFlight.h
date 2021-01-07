/********************************************************************************
** Form generated from reading UI file 'ManageFlight.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEFLIGHT_H
#define UI_MANAGEFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageFlight
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TableFlight;
    QLabel *MainLabel;
    QGridLayout *gridLayout_2;
    QPushButton *add;
    QPushButton *del;
    QPushButton *edit;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;

    void setupUi(QDialog *ManageFlight)
    {
        if (ManageFlight->objectName().isEmpty())
            ManageFlight->setObjectName(QString::fromUtf8("ManageFlight"));
        ManageFlight->resize(864, 405);
        gridLayout = new QGridLayout(ManageFlight);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TableFlight = new QTableWidget(ManageFlight);
        if (TableFlight->columnCount() < 6)
            TableFlight->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        TableFlight->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        TableFlight->setObjectName(QString::fromUtf8("TableFlight"));
        TableFlight->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableFlight->setSelectionMode(QAbstractItemView::SingleSelection);
        TableFlight->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableFlight->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableFlight, 2, 0, 1, 1);

        MainLabel = new QLabel(ManageFlight);
        MainLabel->setObjectName(QString::fromUtf8("MainLabel"));
        QFont font;
        font.setPointSize(16);
        MainLabel->setFont(font);
        MainLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MainLabel, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(9);
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        add = new QPushButton(ManageFlight);
        add->setObjectName(QString::fromUtf8("add"));
        QFont font1;
        font1.setPointSize(10);
        add->setFont(font1);
        add->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(add, 1, 0, 1, 1);

        del = new QPushButton(ManageFlight);
        del->setObjectName(QString::fromUtf8("del"));
        del->setFont(font1);
        del->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(del, 0, 0, 1, 1);

        edit = new QPushButton(ManageFlight);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setFont(font1);
        edit->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(edit, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        accept = new QPushButton(ManageFlight);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font2;
        font2.setPointSize(12);
        accept->setFont(font2);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(ManageFlight);
        QObject::connect(accept, SIGNAL(clicked()), ManageFlight, SLOT(close()));

        QMetaObject::connectSlotsByName(ManageFlight);
    } // setupUi

    void retranslateUi(QDialog *ManageFlight)
    {
        ManageFlight->setWindowTitle(QCoreApplication::translate("ManageFlight", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableFlight->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManageFlight", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableFlight->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManageFlight", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\262\320\270\320\260\320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TableFlight->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ManageFlight", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\321\207\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TableFlight->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ManageFlight", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260 \320\277\320\276 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\216", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TableFlight->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ManageFlight", "\320\236\320\266\320\270\320\264\320\260\320\265\320\274\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TableFlight->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ManageFlight", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        MainLabel->setText(QCoreApplication::translate("ManageFlight", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\265\320\271\321\201\320\260\320\274\320\270", nullptr));
        add->setText(QCoreApplication::translate("ManageFlight", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        del->setText(QCoreApplication::translate("ManageFlight", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        edit->setText(QCoreApplication::translate("ManageFlight", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("ManageFlight", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageFlight: public Ui_ManageFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEFLIGHT_H
