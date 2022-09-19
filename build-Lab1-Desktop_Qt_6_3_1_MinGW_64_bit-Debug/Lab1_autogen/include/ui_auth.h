/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Auth
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *Auth)
    {
        if (Auth->objectName().isEmpty())
            Auth->setObjectName(QString::fromUtf8("Auth"));
        Auth->resize(824, 587);
        label = new QLabel(Auth);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 601, 581));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/unknown.png")));
        label->setScaledContents(true);
        textEdit = new QTextEdit(Auth);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(620, 270, 201, 41));

        retranslateUi(Auth);

        QMetaObject::connectSlotsByName(Auth);
    } // setupUi

    void retranslateUi(QWidget *Auth)
    {
        Auth->setWindowTitle(QCoreApplication::translate("Auth", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Auth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\245\321\214\321\216\320\263\320\276 \320\234\320\270\321\205\320\260\320\270\320\273<br />\320\235\320\260\321\203\320\274\320\276\320\262 \320\235\320\270\320\272\320\270\321\202\320\260</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Auth: public Ui_Auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
