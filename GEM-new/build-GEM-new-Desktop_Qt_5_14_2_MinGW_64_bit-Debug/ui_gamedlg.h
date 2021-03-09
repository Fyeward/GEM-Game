/********************************************************************************
** Form generated from reading UI file 'gamedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEDLG_H
#define UI_GAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameDlg
{
public:
    QProgressBar *progressBar;
    QLabel *label;
    QProgressBar *progressBar_2;
    QLabel *label_2;
    QLabel *label_score;
    QPushButton *pushButton_66;
    QPushButton *pushButton_67;

    void setupUi(QDialog *GameDlg)
    {
        if (GameDlg->objectName().isEmpty())
            GameDlg->setObjectName(QString::fromUtf8("GameDlg"));
        GameDlg->resize(900, 600);
        progressBar = new QProgressBar(GameDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 530, 551, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        progressBar->setFont(font);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;\n"
""));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        label = new QLabel(GameDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 130, 140, 60));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        progressBar_2 = new QProgressBar(GameDlg);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(760, 200, 111, 60));
        progressBar_2->setFont(font);
        progressBar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        progressBar_2->setValue(0);
        progressBar_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(GameDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(610, 200, 140, 60));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        label_score = new QLabel(GameDlg);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setGeometry(QRect(760, 130, 111, 60));
        label_score->setFont(font);
        label_score->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;\n"
""));
        label_score->setAlignment(Qt::AlignCenter);
        pushButton_66 = new QPushButton(GameDlg);
        pushButton_66->setObjectName(QString::fromUtf8("pushButton_66"));
        pushButton_66->setEnabled(true);
        pushButton_66->setGeometry(QRect(620, 340, 140, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        pushButton_66->setFont(font1);
        pushButton_66->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));
        pushButton_67 = new QPushButton(GameDlg);
        pushButton_67->setObjectName(QString::fromUtf8("pushButton_67"));
        pushButton_67->setGeometry(QRect(620, 410, 140, 60));
        pushButton_67->setFont(font1);
        pushButton_67->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-width:6px;\n"
"border-radius:15px;\n"
"border-color:rgba(255,255,255,200);\n"
"padding:6px;"));

        retranslateUi(GameDlg);

        QMetaObject::connectSlotsByName(GameDlg);
    } // setupUi

    void retranslateUi(QDialog *GameDlg)
    {
        GameDlg->setWindowTitle(QCoreApplication::translate("GameDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GameDlg", "\345\275\223\345\211\215\345\276\227\345\210\206\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("GameDlg", "\345\276\227\345\210\206\350\277\233\345\272\246", nullptr));
        label_score->setText(QCoreApplication::translate("GameDlg", "0", nullptr));
        pushButton_66->setText(QCoreApplication::translate("GameDlg", "\346\232\202\345\201\234", nullptr));
        pushButton_67->setText(QCoreApplication::translate("GameDlg", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameDlg: public Ui_GameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEDLG_H
