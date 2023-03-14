/********************************************************************************
** Form generated from reading UI file 'plots.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTS_H
#define UI_PLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plots
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *plots)
    {
        if (plots->objectName().isEmpty())
            plots->setObjectName("plots");
        plots->resize(665, 423);
        gridLayout = new QGridLayout(plots);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(plots);
        tabWidget->setObjectName("tabWidget");

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(plots);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(plots);
    } // setupUi

    void retranslateUi(QWidget *plots)
    {
        plots->setWindowTitle(QCoreApplication::translate("plots", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plots: public Ui_plots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTS_H
