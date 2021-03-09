/********************************************************************************
** Form generated from reading UI file 'musicdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICDLG_H
#define UI_MUSICDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MusicDlg
{
public:

    void setupUi(QDialog *MusicDlg)
    {
        if (MusicDlg->objectName().isEmpty())
            MusicDlg->setObjectName(QString::fromUtf8("MusicDlg"));
        MusicDlg->resize(400, 300);

        retranslateUi(MusicDlg);

        QMetaObject::connectSlotsByName(MusicDlg);
    } // setupUi

    void retranslateUi(QDialog *MusicDlg)
    {
        MusicDlg->setWindowTitle(QCoreApplication::translate("MusicDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicDlg: public Ui_MusicDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICDLG_H
