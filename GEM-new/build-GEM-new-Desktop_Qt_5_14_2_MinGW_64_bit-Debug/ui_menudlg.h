/********************************************************************************
** Form generated from reading UI file 'menudlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDLG_H
#define UI_MENUDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuDlg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MenuDlg)
    {
        if (MenuDlg->objectName().isEmpty())
            MenuDlg->setObjectName(QString::fromUtf8("MenuDlg"));
        MenuDlg->resize(300, 300);
        pushButton = new QPushButton(MenuDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(75, 70, 150, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_2 = new QPushButton(MenuDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(75, 180, 150, 50));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));

        retranslateUi(MenuDlg);

        QMetaObject::connectSlotsByName(MenuDlg);
    } // setupUi

    void retranslateUi(QDialog *MenuDlg)
    {
        MenuDlg->setWindowTitle(QCoreApplication::translate("MenuDlg", "\351\200\211\351\241\271", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuDlg", "\350\256\276\347\275\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MenuDlg", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuDlg: public Ui_MenuDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDLG_H
