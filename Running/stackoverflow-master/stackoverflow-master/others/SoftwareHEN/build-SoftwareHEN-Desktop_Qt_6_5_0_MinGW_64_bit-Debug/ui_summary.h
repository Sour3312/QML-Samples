/********************************************************************************
** Form generated from reading UI file 'summary.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARY_H
#define UI_SUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Summary
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *Menu;
    QVBoxLayout *verticalLayout;
    QScrollArea *estatus;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *Visualizador;

    void setupUi(QWidget *Summary)
    {
        if (Summary->objectName().isEmpty())
            Summary->setObjectName("Summary");
        Summary->resize(734, 395);
        gridLayout = new QGridLayout(Summary);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Menu = new QTreeView(Summary);
        Menu->setObjectName("Menu");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Menu);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        estatus = new QScrollArea(Summary);
        estatus->setObjectName("estatus");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(estatus->sizePolicy().hasHeightForWidth());
        estatus->setSizePolicy(sizePolicy1);
        estatus->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 69));
        estatus->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(estatus);

        Visualizador = new QTableWidget(Summary);
        Visualizador->setObjectName("Visualizador");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Visualizador->sizePolicy().hasHeightForWidth());
        Visualizador->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(Visualizador);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Summary);

        QMetaObject::connectSlotsByName(Summary);
    } // setupUi

    void retranslateUi(QWidget *Summary)
    {
        Summary->setWindowTitle(QCoreApplication::translate("Summary", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Summary: public Ui_Summary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARY_H
