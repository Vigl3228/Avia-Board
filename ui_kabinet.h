/********************************************************************************
** Form generated from reading UI file 'kabinet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KABINET_H
#define UI_KABINET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InfoUser
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *Llogin;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *LPassword;
    QLabel *Lstatus;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *Exit;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;

    void setupUi(QDialog *InfoUser)
    {
        if (InfoUser->objectName().isEmpty())
            InfoUser->setObjectName(QString::fromUtf8("InfoUser"));
        InfoUser->resize(412, 277);
        gridLayout_4 = new QGridLayout(InfoUser);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(9, 9, 9, 9);
        Llogin = new QLabel(InfoUser);
        Llogin->setObjectName(QString::fromUtf8("Llogin"));
        Llogin->setMinimumSize(QSize(150, 0));
        Llogin->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(12);
        Llogin->setFont(font);

        gridLayout_5->addWidget(Llogin, 0, 1, 1, 1);

        label_4 = new QLabel(InfoUser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 6, 0, 1, 1);

        label_3 = new QLabel(InfoUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_5->addWidget(label_3, 4, 0, 1, 1);

        LPassword = new QLabel(InfoUser);
        LPassword->setObjectName(QString::fromUtf8("LPassword"));
        LPassword->setMinimumSize(QSize(150, 0));
        LPassword->setMaximumSize(QSize(150, 16777215));
        LPassword->setFont(font);
        LPassword->setMidLineWidth(0);
        LPassword->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(LPassword, 4, 1, 1, 1);

        Lstatus = new QLabel(InfoUser);
        Lstatus->setObjectName(QString::fromUtf8("Lstatus"));
        Lstatus->setFont(font);

        gridLayout_5->addWidget(Lstatus, 6, 1, 1, 1);

        label_2 = new QLabel(InfoUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 5, 0, 1, 1);

        label = new QLabel(InfoUser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(390, 0));
        label->setMaximumSize(QSize(300, 30));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setFocusPolicy(Qt::NoFocus);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        Exit = new QPushButton(InfoUser);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        QFont font2;
        font2.setPointSize(10);
        Exit->setFont(font2);
        Exit->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        accept = new QPushButton(InfoUser);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setMaximumSize(QSize(70, 16777215));
        accept->setFont(font);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(accept);


        gridLayout_4->addLayout(horizontalLayout, 9, 0, 1, 1);


        retranslateUi(InfoUser);
        QObject::connect(accept, SIGNAL(clicked()), InfoUser, SLOT(close()));
        QObject::connect(Exit, SIGNAL(clicked()), InfoUser, SLOT(accept()));

        QMetaObject::connectSlotsByName(InfoUser);
    } // setupUi

    void retranslateUi(QDialog *InfoUser)
    {
        InfoUser->setWindowTitle(QCoreApplication::translate("InfoUser", "Dialog", nullptr));
        Llogin->setText(QString());
        label_4->setText(QCoreApplication::translate("InfoUser", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        label_3->setText(QCoreApplication::translate("InfoUser", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        LPassword->setText(QString());
        Lstatus->setText(QString());
        label_2->setText(QCoreApplication::translate("InfoUser", "\320\233\320\276\320\263\320\270\320\275: ", nullptr));
        label->setText(QCoreApplication::translate("InfoUser", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        Exit->setText(QCoreApplication::translate("InfoUser", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        accept->setText(QCoreApplication::translate("InfoUser", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoUser: public Ui_InfoUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KABINET_H
