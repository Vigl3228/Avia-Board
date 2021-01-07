/********************************************************************************
** Form generated from reading UI file 'addflight.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFLIGHT_H
#define UI_ADDFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFlight
{
public:
    QGridLayout *gridLayout;
    QLabel *error;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;
    QGridLayout *gridLayout_2;
    QLineEdit *Nazn;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QTimeEdit *time_2;
    QLineEdit *Number;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *Otpr;
    QLabel *label_3;
    QTimeEdit *time_1;
    QComboBox *Status_box;

    void setupUi(QDialog *AddFlight)
    {
        if (AddFlight->objectName().isEmpty())
            AddFlight->setObjectName(QString::fromUtf8("AddFlight"));
        AddFlight->resize(683, 336);
        gridLayout = new QGridLayout(AddFlight);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        error = new QLabel(AddFlight);
        error->setObjectName(QString::fromUtf8("error"));
        error->setMinimumSize(QSize(0, 25));
        error->setMaximumSize(QSize(16777215, 25));
        error->setCursor(QCursor(Qt::ForbiddenCursor));
        error->setStyleSheet(QString::fromUtf8(""));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 4, 0, 1, 1);

        label_7 = new QLabel(AddFlight);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(16);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cancel = new QPushButton(AddFlight);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font1;
        font1.setPointSize(12);
        cancel->setFont(font1);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        accept = new QPushButton(AddFlight);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font1);
        accept->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Nazn = new QLineEdit(AddFlight);
        Nazn->setObjectName(QString::fromUtf8("Nazn"));
        QFont font2;
        font2.setPointSize(10);
        Nazn->setFont(font2);

        gridLayout_2->addWidget(Nazn, 4, 1, 1, 1);

        label_2 = new QLabel(AddFlight);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(AddFlight);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(AddFlight);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        time_2 = new QTimeEdit(AddFlight);
        time_2->setObjectName(QString::fromUtf8("time_2"));
        time_2->setCursor(QCursor(Qt::IBeamCursor));
        time_2->setCalendarPopup(false);
        time_2->setCurrentSectionIndex(0);
        time_2->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(time_2, 7, 1, 1, 1);

        Number = new QLineEdit(AddFlight);
        Number->setObjectName(QString::fromUtf8("Number"));
        Number->setFont(font2);

        gridLayout_2->addWidget(Number, 2, 1, 1, 1);

        label_8 = new QLabel(AddFlight);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 11, 0, 1, 1);

        label_4 = new QLabel(AddFlight);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 7, 0, 1, 1);

        Otpr = new QLineEdit(AddFlight);
        Otpr->setObjectName(QString::fromUtf8("Otpr"));
        Otpr->setFont(font2);

        gridLayout_2->addWidget(Otpr, 3, 1, 1, 1);

        label_3 = new QLabel(AddFlight);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        time_1 = new QTimeEdit(AddFlight);
        time_1->setObjectName(QString::fromUtf8("time_1"));
        time_1->setCursor(QCursor(Qt::IBeamCursor));

        gridLayout_2->addWidget(time_1, 6, 1, 1, 1);

        Status_box = new QComboBox(AddFlight);
        Status_box->addItem(QString());
        Status_box->addItem(QString());
        Status_box->addItem(QString());
        Status_box->addItem(QString());
        Status_box->setObjectName(QString::fromUtf8("Status_box"));
        Status_box->setFont(font2);
        Status_box->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(Status_box, 11, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);


        retranslateUi(AddFlight);
        QObject::connect(accept, SIGNAL(clicked()), AddFlight, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), AddFlight, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFlight);
    } // setupUi

    void retranslateUi(QDialog *AddFlight)
    {
        AddFlight->setWindowTitle(QCoreApplication::translate("AddFlight", "Dialog", nullptr));
        error->setText(QString());
        label_7->setText(QCoreApplication::translate("AddFlight", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265/\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\200\320\265\320\271\321\201\320\260", nullptr));
        cancel->setText(QCoreApplication::translate("AddFlight", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("AddFlight", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("AddFlight", "\320\235\320\276\320\274\320\265\321\200 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260:", nullptr));
        label_5->setText(QCoreApplication::translate("AddFlight", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\262\320\270\320\260\320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("AddFlight", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        time_2->setDisplayFormat(QCoreApplication::translate("AddFlight", "HH:mm", nullptr));
        label_8->setText(QCoreApplication::translate("AddFlight", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\200\320\265\320\271\321\201\320\260: ", nullptr));
        label_4->setText(QCoreApplication::translate("AddFlight", "\320\236\320\266\320\270\320\264\320\260\320\265\320\274\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260: ", nullptr));
        label_3->setText(QCoreApplication::translate("AddFlight", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\273\320\265\321\202\320\260 \320\277\320\276 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\216: ", nullptr));
        time_1->setDisplayFormat(QCoreApplication::translate("AddFlight", "HH:mm", nullptr));
        Status_box->setItemText(0, QString());
        Status_box->setItemText(1, QCoreApplication::translate("AddFlight", "\320\236\321\202\320\273\320\276\320\266\320\265\320\275", nullptr));
        Status_box->setItemText(2, QCoreApplication::translate("AddFlight", "\320\222\321\213\320\273\320\265\321\202\320\265\320\273", nullptr));
        Status_box->setItemText(3, QCoreApplication::translate("AddFlight", "\320\237\321\200\320\270\320\261\321\213\320\273", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddFlight: public Ui_AddFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFLIGHT_H
