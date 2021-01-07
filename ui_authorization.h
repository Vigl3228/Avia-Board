/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *Llog;
    QLabel *label_6;
    QLineEdit *Lpass;
    QLabel *labelError;
    QGridLayout *gridLayout;
    QPushButton *registr;
    QPushButton *sign;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(400, 270);
        verticalLayout = new QVBoxLayout(SignIn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(SignIn);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(SignIn);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        Llog = new QLineEdit(SignIn);
        Llog->setObjectName(QString::fromUtf8("Llog"));
        Llog->setFont(font1);
        Llog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, Llog);

        label_6 = new QLabel(SignIn);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        Lpass = new QLineEdit(SignIn);
        Lpass->setObjectName(QString::fromUtf8("Lpass"));
        Lpass->setFont(font1);
        Lpass->setEchoMode(QLineEdit::Password);
        Lpass->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, Lpass);


        verticalLayout->addLayout(formLayout);

        labelError = new QLabel(SignIn);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setMinimumSize(QSize(0, 25));
        labelError->setMaximumSize(QSize(16777215, 25));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        labelError->setFont(font2);
        labelError->setStyleSheet(QString::fromUtf8(""));
        labelError->setTextFormat(Qt::RichText);
        labelError->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelError);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 9);
        registr = new QPushButton(SignIn);
        registr->setObjectName(QString::fromUtf8("registr"));
        registr->setMinimumSize(QSize(150, 0));
        registr->setMaximumSize(QSize(150, 16777215));
        QFont font3;
        font3.setPointSize(11);
        registr->setFont(font3);
        registr->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(registr, 2, 0, 1, 1);

        sign = new QPushButton(SignIn);
        sign->setObjectName(QString::fromUtf8("sign"));
        sign->setMinimumSize(QSize(100, 0));
        sign->setMaximumSize(QSize(150, 16777215));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        sign->setFont(font4);
        sign->setCursor(QCursor(Qt::PointingHandCursor));
        sign->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(sign, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("SignIn", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("SignIn", "\320\233\320\276\320\263\320\270\320\275: ", nullptr));
        label_6->setText(QCoreApplication::translate("SignIn", "\320\237\320\260\321\200\320\276\320\273\321\214: ", nullptr));
#if QT_CONFIG(whatsthis)
        labelError->setWhatsThis(QCoreApplication::translate("SignIn", "<html><head/><body><p>\320\225\321\201\320\273\320\270 \320\262\320\260\320\274 \320\275\320\265 \321\203\320\264\320\260\320\265\321\202\321\201\321\217 \320\262\320\276\320\271\321\202\320\270 \320\262 \321\201\320\262\320\276\320\271 \320\260\320\272\320\272\320\260\321\203\320\275\321\202, \320\276\320\261\321\200\320\260\321\202\320\270\321\202\320\265\321\201\321\214 \320\267\320\260 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\321\203.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelError->setText(QString());
        registr->setText(QCoreApplication::translate("SignIn", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        sign->setText(QCoreApplication::translate("SignIn", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
