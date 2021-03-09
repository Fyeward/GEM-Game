/********************************************************************************
** Form generated from reading UI file 'helpdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDLG_H
#define UI_HELPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_HelpDlg
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *HelpDlg)
    {
        if (HelpDlg->objectName().isEmpty())
            HelpDlg->setObjectName(QString::fromUtf8("HelpDlg"));
        HelpDlg->resize(550, 400);
        textEdit = new QTextEdit(HelpDlg);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 550, 400));

        retranslateUi(HelpDlg);

        QMetaObject::connectSlotsByName(HelpDlg);
    } // setupUi

    void retranslateUi(QDialog *HelpDlg)
    {
        HelpDlg->setWindowTitle(QCoreApplication::translate("HelpDlg", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("HelpDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">1\343\200\201\344\272\222\346\215\242</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\347\216\251\345\256\266\345\246\202\346\236\234\351\200\211\344\270\255\347\233\270\351\202\273\357\274\210\346\250\252\343\200\201\347\253\226\357\274\211\347\232\204\344"
                        "\270\244\344\270\252\345\256\235\347\237\263\344\275\215\347\275\256\345\217\221\347\224\237\344\272\222\346\215\242\357\274\214\345\246\202\346\236\234\344\272\222\346\215\242\346\210\220\345\212\237\345\210\231\346\266\210\345\216\273\345\256\235\347\237\263\357\274\214\345\220\246\345\210\231\345\217\226\346\266\210\344\275\215\347\275\256\344\272\222\346\215\242\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">2\343\200\201\346\266\210\345\216\273</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\347\216\251\345\256\266\351\200\211\346\213\251\344\270\244\344\270\252\345\256\235\347\237"
                        "\263\350\277\233\350\241\214\344\275\215\347\275\256\344\272\222\346\215\242\357\274\214\344\272\222\346\215\242\345\220\216\345\246\202\346\236\234\346\250\252\346\216\222\346\210\226\347\253\226\346\216\222\346\234\2113\344\270\252\346\210\226\344\273\245\344\270\212\347\232\204\347\233\270\345\220\214\345\256\235\347\237\263\357\274\214\345\210\231\351\200\211\344\270\255\347\232\204\344\270\244\344\270\252\345\256\235\347\237\263\346\215\242\345\233\236\345\216\237\346\235\245\347\232\204\344\275\215\347\275\256\343\200\202\347\251\272\344\275\215\347\224\261\344\270\212\344\275\215\345\256\235\347\237\263\350\220\275\344\270\213\350\241\245\345\205\205\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">3"
                        "\343\200\201\350\277\236\351\224\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\347\216\251\345\256\266\346\266\210\345\216\273\345\256\235\347\237\263\345\220\216\357\274\214\344\270\212\351\235\242\347\232\204\345\256\235\347\237\263\346\216\211\344\270\213\346\235\245\350\241\245\345\205\205\347\251\272\346\240\274\343\200\202\345\246\202\346\236\234\346\255\244\346\227\266\346\261\240\344\270\255\345\255\230\345\234\250\346\273\241\350\266\263\346\266\210\345\216\273\350\247\204\345\210\231\347\232\204\345\256\235\347\237\263\357\274\214\351\202\243\344\271\210\345\256\203\344\273\254\345\260\206\350\207\252\345\212\250\346\266\210\345\216\273\343\200\202\345\246\202\346\255\244\345\217\215\345\244\215\347\233\264\345\210\260\344\270\215\346\273\241\350\266\263\350\277\236\351\224\201\346\235\241\344\273\266\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDlg: public Ui_HelpDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDLG_H
