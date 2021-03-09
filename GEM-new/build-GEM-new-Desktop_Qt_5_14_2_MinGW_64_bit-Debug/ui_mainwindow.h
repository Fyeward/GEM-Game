/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 100, 300, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 160, 140, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 160, 140, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 220, 140, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 220, 140, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
