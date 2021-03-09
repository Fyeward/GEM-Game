/********************************************************************************
** Form generated from reading UI file 'themedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMEDLG_H
#define UI_THEMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ThemeDlg
{
public:

    void setupUi(QDialog *ThemeDlg)
    {
        if (ThemeDlg->objectName().isEmpty())
            ThemeDlg->setObjectName(QString::fromUtf8("ThemeDlg"));
        ThemeDlg->resize(400, 300);

        retranslateUi(ThemeDlg);

        QMetaObject::connectSlotsByName(ThemeDlg);
    } // setupUi

    void retranslateUi(QDialog *ThemeDlg)
    {
        ThemeDlg->setWindowTitle(QCoreApplication::translate("ThemeDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThemeDlg: public Ui_ThemeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMEDLG_H
