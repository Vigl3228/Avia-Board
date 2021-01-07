/********************************************************************************
** Form generated from reading UI file 'addusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERS_H
#define UI_ADDUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddUsers
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QPushButton *cancel;
    QPushButton *accept;
    QGridLayout *gridLayout_2;
    QLabel *login;
    QLineEdit *L_login;
    QComboBox *L_status;
    QLabel *status;
    QLabel *password;
    QLineEdit *L_password;
    QLabel *Error;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddUsers)
    {
        if (AddUsers->objectName().isEmpty())
            AddUsers->setObjectName(QString::fromUtf8("AddUsers"));
        AddUsers->resize(349, 249);
        gridLayout = new QGridLayout(AddUsers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddUsers);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cancel = new QPushButton(AddUsers);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font1;
        font1.setPointSize(12);
        cancel->setFont(font1);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(cancel, 0, 0, 1, 1);

        accept = new QPushButton(AddUsers);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font1);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(accept, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        login = new QLabel(AddUsers);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font1);

        gridLayout_2->addWidget(login, 0, 0, 1, 1);

        L_login = new QLineEdit(AddUsers);
        L_login->setObjectName(QString::fromUtf8("L_login"));
        L_login->setFont(font1);

        gridLayout_2->addWidget(L_login, 0, 1, 1, 1);

        L_status = new QComboBox(AddUsers);
        L_status->addItem(QString());
        L_status->addItem(QString());
        L_status->addItem(QString());
        L_status->setObjectName(QString::fromUtf8("L_status"));
        L_status->setFont(font1);
        L_status->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(L_status, 3, 1, 1, 1);

        status = new QLabel(AddUsers);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font1);

        gridLayout_2->addWidget(status, 3, 0, 1, 1);

        password = new QLabel(AddUsers);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font1);

        gridLayout_2->addWidget(password, 2, 0, 1, 1);

        L_password = new QLineEdit(AddUsers);
        L_password->setObjectName(QString::fromUtf8("L_password"));
        L_password->setFont(font1);
        L_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(L_password, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        Error = new QLabel(AddUsers);
        Error->setObjectName(QString::fromUtf8("Error"));
        Error->setMinimumSize(QSize(0, 25));
        Error->setMaximumSize(QSize(16777215, 25));
        QFont font2;
        font2.setPointSize(10);
        Error->setFont(font2);
        Error->setCursor(QCursor(Qt::ForbiddenCursor));
        Error->setStyleSheet(QString::fromUtf8(""));
        Error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Error, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(AddUsers);
        QObject::connect(accept, SIGNAL(clicked()), AddUsers, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), AddUsers, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddUsers);
    } // setupUi

    void retranslateUi(QDialog *AddUsers)
    {
        AddUsers->setWindowTitle(QCoreApplication::translate("AddUsers", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddUsers", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        cancel->setText(QCoreApplication::translate("AddUsers", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("AddUsers", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        login->setText(QCoreApplication::translate("AddUsers", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        L_status->setItemText(0, QCoreApplication::translate("AddUsers", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200", nullptr));
        L_status->setItemText(1, QCoreApplication::translate("AddUsers", "\320\224\320\270\321\201\320\277\320\265\321\202\321\207\320\265\321\200", nullptr));
        L_status->setItemText(2, QCoreApplication::translate("AddUsers", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));

        status->setText(QCoreApplication::translate("AddUsers", "\320\241\321\202\320\260\321\202\321\203\321\201: ", nullptr));
        password->setText(QCoreApplication::translate("AddUsers", "\320\237\320\260\321\200\320\276\320\273\321\214: ", nullptr));
        Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddUsers: public Ui_AddUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERS_H
