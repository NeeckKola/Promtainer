/********************************************************************************
** Form generated from reading UI file 'Promtainer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMTAINER_H
#define UI_PROMTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromtainerClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *PromtainerClass)
    {
        if (PromtainerClass->objectName().isEmpty())
            PromtainerClass->setObjectName("PromtainerClass");
        PromtainerClass->resize(600, 400);
        centralWidget = new QWidget(PromtainerClass);
        centralWidget->setObjectName("centralWidget");
        PromtainerClass->setCentralWidget(centralWidget);

        retranslateUi(PromtainerClass);

        QMetaObject::connectSlotsByName(PromtainerClass);
    } // setupUi

    void retranslateUi(QMainWindow *PromtainerClass)
    {
        PromtainerClass->setWindowTitle(QCoreApplication::translate("PromtainerClass", "Promtainer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromtainerClass: public Ui_PromtainerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMTAINER_H
