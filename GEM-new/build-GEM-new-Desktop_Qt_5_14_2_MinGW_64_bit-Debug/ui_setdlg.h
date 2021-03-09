/********************************************************************************
** Form generated from reading UI file 'setdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDLG_H
#define UI_SETDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetDlg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *theme;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QWidget *music;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *SetDlg)
    {
        if (SetDlg->objectName().isEmpty())
            SetDlg->setObjectName(QString::fromUtf8("SetDlg"));
        SetDlg->resize(600, 400);
        pushButton = new QPushButton(SetDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 329, 150, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_2 = new QPushButton(SetDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 329, 150, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        tabWidget = new QTabWidget(SetDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 600, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
"\n"
"\n"
"\n"
";"));
        theme = new QWidget();
        theme->setObjectName(QString::fromUtf8("theme"));
        theme->setStyleSheet(QString::fromUtf8(""));
        radioButton = new QRadioButton(theme);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 10, 115, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        radioButton_2 = new QRadioButton(theme);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(320, 10, 115, 41));
        radioButton_2->setFont(font1);
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        radioButton_2->setChecked(true);
        label_3 = new QLabel(theme);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 100, 40));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        lineEdit_3 = new QLineEdit(theme);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 70, 360, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_5 = new QPushButton(theme);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(490, 70, 101, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_4 = new QLabel(theme);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 100, 40));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        lineEdit_4 = new QLineEdit(theme);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 140, 360, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_6 = new QPushButton(theme);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(490, 140, 101, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_5 = new QLabel(theme);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 210, 101, 41));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_5->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(theme);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 210, 120, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_6 = new QLabel(theme);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 210, 220, 41));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        tabWidget->addTab(theme, QString());
        music = new QWidget();
        music->setObjectName(QString::fromUtf8("music"));
        checkBox = new QCheckBox(music);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(120, 9, 115, 41));
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(music);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(320, 9, 115, 41));
        checkBox_2->setFont(font1);
        checkBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        checkBox_2->setChecked(true);
        label = new QLabel(music);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 70, 41));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(music);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 129, 70, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(music);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 70, 360, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        lineEdit_2 = new QLineEdit(music);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 130, 360, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_3 = new QPushButton(music);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 70, 101, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_4 = new QPushButton(music);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 130, 101, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        tabWidget->addTab(music, QString());

        retranslateUi(SetDlg);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SetDlg);
    } // setupUi

    void retranslateUi(QDialog *SetDlg)
    {
        SetDlg->setWindowTitle(QCoreApplication::translate("SetDlg", "\351\200\211\351\241\271", nullptr));
        pushButton->setText(QCoreApplication::translate("SetDlg", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SetDlg", "\345\217\226\346\266\210", nullptr));
        radioButton->setText(QCoreApplication::translate("SetDlg", "\351\273\230\350\256\244", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SetDlg", "\350\207\252\345\256\232\344\271\211", nullptr));
        label_3->setText(QCoreApplication::translate("SetDlg", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SetDlg", "\346\265\217\350\247\210\346\226\207\344\273\266\345\244\271", nullptr));
        label_4->setText(QCoreApplication::translate("SetDlg", "\345\256\235\347\237\263\345\233\276\347\211\207", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SetDlg", "\346\265\217\350\247\210\346\226\207\344\273\266\345\244\271", nullptr));
        label_5->setText(QCoreApplication::translate("SetDlg", "\351\200\211\346\213\251\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("SetDlg", "\344\270\203\347\247\215\345\256\235\347\237\263\345\272\217\345\217\267\344\270\2721-7", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(theme), QCoreApplication::translate("SetDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        checkBox->setText(QCoreApplication::translate("SetDlg", "\351\237\263\344\271\220", nullptr));
        checkBox_2->setText(QCoreApplication::translate("SetDlg", "\351\237\263\346\225\210", nullptr));
        label->setText(QCoreApplication::translate("SetDlg", "\351\237\263\344\271\220", nullptr));
        label_2->setText(QCoreApplication::translate("SetDlg", "\351\237\263\346\225\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SetDlg", "\346\265\217\350\247\210\346\226\207\344\273\266\345\244\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SetDlg", "\346\265\217\350\247\210\346\226\207\344\273\266\345\244\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(music), QCoreApplication::translate("SetDlg", "\351\237\263\344\271\220\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDlg: public Ui_SetDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDLG_H
