/********************************************************************************
** Form generated from reading UI file 'namedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEDLG_H
#define UI_NAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NameDlg
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NameDlg)
    {
        if (NameDlg->objectName().isEmpty())
            NameDlg->setObjectName(QString::fromUtf8("NameDlg"));
        NameDlg->resize(328, 187);
        label = new QLabel(NameDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setFrameShadow(QFrame::Plain);
        lineEdit = new QLineEdit(NameDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 60, 201, 41));
        pushButton = new QPushButton(NameDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 120, 93, 28));
        pushButton_2 = new QPushButton(NameDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 120, 93, 28));

        retranslateUi(NameDlg);

        QMetaObject::connectSlotsByName(NameDlg);
    } // setupUi

    void retranslateUi(QDialog *NameDlg)
    {
        NameDlg->setWindowTitle(QCoreApplication::translate("NameDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NameDlg", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\244\247\345\220\215\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("NameDlg", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NameDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameDlg: public Ui_NameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEDLG_H
