/********************************************************************************
** Form generated from reading UI file 'shadow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOW_H
#define UI_SHADOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shadow
{
public:

    void setupUi(QWidget *shadow)
    {
        if (shadow->objectName().isEmpty())
            shadow->setObjectName(QString::fromUtf8("shadow"));
        shadow->resize(400, 300);

        retranslateUi(shadow);

        QMetaObject::connectSlotsByName(shadow);
    } // setupUi

    void retranslateUi(QWidget *shadow)
    {
        shadow->setWindowTitle(QCoreApplication::translate("shadow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shadow: public Ui_shadow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOW_H
