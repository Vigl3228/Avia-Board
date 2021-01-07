/********************************************************************************
** Form generated from reading UI file 'ManageUsers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEUSERS_H
#define UI_MANAGEUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageUsers
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *up;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *down;
    QLabel *label;
    QTableWidget *TableUsers;

    void setupUi(QDialog *ManageUsers)
    {
        if (ManageUsers->objectName().isEmpty())
            ManageUsers->setObjectName(QString::fromUtf8("ManageUsers"));
        ManageUsers->resize(402, 427);
        gridLayout = new QGridLayout(ManageUsers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        accept = new QPushButton(ManageUsers);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font;
        font.setPointSize(12);
        accept->setFont(font);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(accept);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        up = new QPushButton(ManageUsers);
        up->setObjectName(QString::fromUtf8("up"));
        QFont font1;
        font1.setPointSize(10);
        up->setFont(font1);
        up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(up, 1, 0, 1, 1);

        add = new QPushButton(ManageUsers);
        add->setObjectName(QString::fromUtf8("add"));
        add->setFont(font1);
        add->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(add, 2, 0, 1, 1);

        delete_2 = new QPushButton(ManageUsers);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setFont(font1);
        delete_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(delete_2, 3, 0, 1, 1);

        down = new QPushButton(ManageUsers);
        down->setObjectName(QString::fromUtf8("down"));
        down->setFont(font1);
        down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(down, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        label = new QLabel(ManageUsers);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        TableUsers = new QTableWidget(ManageUsers);
        if (TableUsers->columnCount() < 2)
            TableUsers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TableUsers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TableUsers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        TableUsers->setObjectName(QString::fromUtf8("TableUsers"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(10);
        TableUsers->setFont(font3);
        TableUsers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableUsers->setSelectionMode(QAbstractItemView::SingleSelection);
        TableUsers->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableUsers->horizontalHeader()->setCascadingSectionResizes(false);
        TableUsers->horizontalHeader()->setMinimumSectionSize(35);
        TableUsers->horizontalHeader()->setDefaultSectionSize(150);
        TableUsers->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TableUsers->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableUsers, 1, 0, 1, 1);


        retranslateUi(ManageUsers);
        QObject::connect(accept, SIGNAL(clicked()), ManageUsers, SLOT(accept()));
        QObject::connect(up, SIGNAL(clicked()), ManageUsers, SLOT(slotUpDownStatus()));
        QObject::connect(down, SIGNAL(clicked()), ManageUsers, SLOT(slotUpDownStatus()));

        QMetaObject::connectSlotsByName(ManageUsers);
    } // setupUi

    void retranslateUi(QDialog *ManageUsers)
    {
        ManageUsers->setWindowTitle(QCoreApplication::translate("ManageUsers", "Dialog", nullptr));
        accept->setText(QCoreApplication::translate("ManageUsers", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        up->setText(QCoreApplication::translate("ManageUsers", "\320\237\320\276\320\262\321\213\321\201\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        add->setText(QCoreApplication::translate("ManageUsers", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        delete_2->setText(QCoreApplication::translate("ManageUsers", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        down->setText(QCoreApplication::translate("ManageUsers", "\320\237\320\276\320\275\320\270\320\267\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        label->setText(QCoreApplication::translate("ManageUsers", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217\320\274\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableUsers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManageUsers", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableUsers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManageUsers", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageUsers: public Ui_ManageUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEUSERS_H
