/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *accept;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *log;
    QLabel *label_3;
    QLineEdit *pass;
    QLabel *label_4;
    QLineEdit *reppass;
    QLabel *label_error;
    QGridLayout *gridLayout;
    QPushButton *auth;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(400, 296);
        verticalLayout = new QVBoxLayout(SignUp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        accept = new QPushButton(SignUp);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setMinimumSize(QSize(0, 30));
        accept->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        accept->setFont(font1);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(accept);

        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_2->setLabelAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_2 = new QLabel(SignUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        log = new QLineEdit(SignUp);
        log->setObjectName(QString::fromUtf8("log"));
        log->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, log);

        label_3 = new QLabel(SignUp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        pass = new QLineEdit(SignUp);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setFont(font2);
        pass->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pass);

        label_4 = new QLabel(SignUp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        reppass = new QLineEdit(SignUp);
        reppass->setObjectName(QString::fromUtf8("reppass"));
        reppass->setFont(font2);
        reppass->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, reppass);


        verticalLayout->addLayout(formLayout_2);

        label_error = new QLabel(SignUp);
        label_error->setObjectName(QString::fromUtf8("label_error"));
        label_error->setMinimumSize(QSize(0, 25));
        label_error->setMaximumSize(QSize(16777215, 25));
        QFont font3;
        font3.setPointSize(9);
        label_error->setFont(font3);
        label_error->setCursor(QCursor(Qt::IBeamCursor));
        label_error->setStyleSheet(QString::fromUtf8(""));
        label_error->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_error);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 9, -1, -1);
        auth = new QPushButton(SignUp);
        auth->setObjectName(QString::fromUtf8("auth"));
        QFont font4;
        font4.setPointSize(11);
        font4.setItalic(false);
        auth->setFont(font4);
        auth->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(auth, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Form", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        accept->setText(QCoreApplication::translate("SignUp", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "\320\233\320\276\320\263\320\270\320\275: ", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_error->setText(QString());
        auth->setText(QCoreApplication::translate("SignUp", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
