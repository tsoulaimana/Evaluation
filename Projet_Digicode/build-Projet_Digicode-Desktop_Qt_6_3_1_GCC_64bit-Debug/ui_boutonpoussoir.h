/********************************************************************************
** Form generated from reading UI file 'boutonpoussoir.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTONPOUSSOIR_H
#define UI_BOUTONPOUSSOIR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoutonPoussoir
{
public:
    QPushButton *pushButtonBp;

    void setupUi(QWidget *BoutonPoussoir)
    {
        if (BoutonPoussoir->objectName().isEmpty())
            BoutonPoussoir->setObjectName(QString::fromUtf8("BoutonPoussoir"));
        BoutonPoussoir->resize(312, 256);
        pushButtonBp = new QPushButton(BoutonPoussoir);
        pushButtonBp->setObjectName(QString::fromUtf8("pushButtonBp"));
        pushButtonBp->setGeometry(QRect(40, 20, 221, 211));
        QFont font;
        font.setPointSize(20);
        pushButtonBp->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/bouton_poussoir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBp->setIcon(icon);
        pushButtonBp->setIconSize(QSize(278, 285));

        retranslateUi(BoutonPoussoir);

        QMetaObject::connectSlotsByName(BoutonPoussoir);
    } // setupUi

    void retranslateUi(QWidget *BoutonPoussoir)
    {
        BoutonPoussoir->setWindowTitle(QCoreApplication::translate("BoutonPoussoir", "Form", nullptr));
        pushButtonBp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoutonPoussoir: public Ui_BoutonPoussoir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTONPOUSSOIR_H
