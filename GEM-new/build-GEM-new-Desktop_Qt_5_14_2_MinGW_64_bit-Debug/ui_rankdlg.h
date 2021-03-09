/********************************************************************************
** Form generated from reading UI file 'rankdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKDLG_H
#define UI_RANKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_RankDlg
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *RankDlg)
    {
        if (RankDlg->objectName().isEmpty())
            RankDlg->setObjectName(QString::fromUtf8("RankDlg"));
        RankDlg->resize(415, 567);
        label = new QLabel(RankDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("AcadEref"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(RankDlg);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 70, 351, 461));

        retranslateUi(RankDlg);

        QMetaObject::connectSlotsByName(RankDlg);
    } // setupUi

    void retranslateUi(QDialog *RankDlg)
    {
        RankDlg->setWindowTitle(QCoreApplication::translate("RankDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RankDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankDlg: public Ui_RankDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKDLG_H
