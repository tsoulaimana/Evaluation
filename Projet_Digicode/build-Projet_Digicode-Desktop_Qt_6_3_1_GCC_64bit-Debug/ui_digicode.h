/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digicode
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditMDP;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_On;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Ok;

    void setupUi(QWidget *digicode)
    {
        if (digicode->objectName().isEmpty())
            digicode->setObjectName(QString::fromUtf8("digicode"));
        digicode->resize(314, 394);
        widget = new QWidget(digicode);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 256, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditMDP = new QLineEdit(widget);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));
        lineEditMDP->setEnabled(true);
        lineEditMDP->setSizeIncrement(QSize(0, 0));
        lineEditMDP->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(23);
        lineEditMDP->setFont(font);
        lineEditMDP->setReadOnly(true);

        verticalLayout->addWidget(lineEditMDP);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QFont font1;
        font1.setPointSize(27);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_On = new QPushButton(widget);
        pushButton_On->setObjectName(QString::fromUtf8("pushButton_On"));
        pushButton_On->setFont(font1);
        pushButton_On->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_On, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_Ok = new QPushButton(widget);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setFont(font1);
        pushButton_Ok->setStyleSheet(QString::fromUtf8("background-color: grey;"));

        gridLayout->addWidget(pushButton_Ok, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(digicode);

        QMetaObject::connectSlotsByName(digicode);
    } // setupUi

    void retranslateUi(QWidget *digicode)
    {
        digicode->setWindowTitle(QCoreApplication::translate("digicode", "digicode", nullptr));
        lineEditMDP->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("digicode", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("digicode", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("digicode", "9", nullptr));
        pushButton_4->setText(QCoreApplication::translate("digicode", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("digicode", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("digicode", "6", nullptr));
        pushButton_1->setText(QCoreApplication::translate("digicode", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("digicode", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("digicode", "3", nullptr));
        pushButton_On->setText(QCoreApplication::translate("digicode", "On", nullptr));
        pushButton_0->setText(QCoreApplication::translate("digicode", "0", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("digicode", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digicode: public Ui_digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H
