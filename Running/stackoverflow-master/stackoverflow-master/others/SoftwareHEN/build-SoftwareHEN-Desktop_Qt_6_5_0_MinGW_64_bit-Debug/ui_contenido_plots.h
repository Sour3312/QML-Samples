/********************************************************************************
** Form generated from reading UI file 'contenido_plots.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENIDO_PLOTS_H
#define UI_CONTENIDO_PLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Contenido_PLOTS
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_24;
    QRadioButton *IncrementradioButton;
    QRadioButton *StaticradioButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *Diverso;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *Uniforme;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *Maximun;
    QLabel *Utext2;
    QLabel *Utext1;
    QDoubleSpinBox *Minimun;
    QDoubleSpinBox *k;
    QDoubleSpinBox *Increment;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Utext4;
    QLabel *Utext3;
    QVBoxLayout *verticalLayout;
    QPushButton *plot_push;
    QPushButton *holdon_push;
    QPushButton *export_push;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QCustomPlot *qcustomplot;

    void setupUi(QWidget *Contenido_PLOTS)
    {
        if (Contenido_PLOTS->objectName().isEmpty())
            Contenido_PLOTS->setObjectName("Contenido_PLOTS");
        Contenido_PLOTS->resize(836, 488);
        gridLayout_2 = new QGridLayout(Contenido_PLOTS);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(Contenido_PLOTS);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_24 = new QGridLayout(groupBox_2);
        gridLayout_24->setObjectName("gridLayout_24");
        IncrementradioButton = new QRadioButton(groupBox_2);
        IncrementradioButton->setObjectName("IncrementradioButton");

        gridLayout_24->addWidget(IncrementradioButton, 1, 3, 1, 1);

        StaticradioButton = new QRadioButton(groupBox_2);
        StaticradioButton->setObjectName("StaticradioButton");

        gridLayout_24->addWidget(StaticradioButton, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer, 1, 4, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(Contenido_PLOTS);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        Diverso = new QRadioButton(groupBox);
        Diverso->setObjectName("Diverso");

        gridLayout_3->addWidget(Diverso, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(89, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        Uniforme = new QRadioButton(groupBox);
        Uniforme->setObjectName("Uniforme");

        gridLayout_3->addWidget(Uniforme, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        Uniforme->raise();
        Diverso->raise();

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        Maximun = new QDoubleSpinBox(Contenido_PLOTS);
        Maximun->setObjectName("Maximun");
        Maximun->setMaximum(999999999.990000009536743);

        gridLayout_5->addWidget(Maximun, 1, 1, 1, 1);

        Utext2 = new QLabel(Contenido_PLOTS);
        Utext2->setObjectName("Utext2");

        gridLayout_5->addWidget(Utext2, 1, 0, 1, 1);

        Utext1 = new QLabel(Contenido_PLOTS);
        Utext1->setObjectName("Utext1");
        Utext1->setEnabled(true);
        Utext1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Utext1, 0, 0, 1, 1);

        Minimun = new QDoubleSpinBox(Contenido_PLOTS);
        Minimun->setObjectName("Minimun");
        Minimun->setEnabled(true);
        Minimun->setMaximum(999999999.990000009536743);

        gridLayout_5->addWidget(Minimun, 0, 1, 1, 1);

        k = new QDoubleSpinBox(Contenido_PLOTS);
        k->setObjectName("k");

        gridLayout_5->addWidget(k, 3, 1, 1, 1);

        Increment = new QDoubleSpinBox(Contenido_PLOTS);
        Increment->setObjectName("Increment");
        Increment->setDecimals(2);
        Increment->setMaximum(999999999.990000009536743);

        gridLayout_5->addWidget(Increment, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 3, 4, 1);

        Utext4 = new QLabel(Contenido_PLOTS);
        Utext4->setObjectName("Utext4");

        gridLayout_5->addWidget(Utext4, 3, 0, 1, 1);

        Utext3 = new QLabel(Contenido_PLOTS);
        Utext3->setObjectName("Utext3");

        gridLayout_5->addWidget(Utext3, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        plot_push = new QPushButton(Contenido_PLOTS);
        plot_push->setObjectName("plot_push");

        verticalLayout->addWidget(plot_push);

        holdon_push = new QPushButton(Contenido_PLOTS);
        holdon_push->setObjectName("holdon_push");

        verticalLayout->addWidget(holdon_push);


        gridLayout_5->addLayout(verticalLayout, 0, 2, 4, 1);

        export_push = new QPushButton(Contenido_PLOTS);
        export_push->setObjectName("export_push");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(export_push->sizePolicy().hasHeightForWidth());
        export_push->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(export_push, 3, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 0, 1, 1);

        qcustomplot = new QCustomPlot(Contenido_PLOTS);
        qcustomplot->setObjectName("qcustomplot");
        qcustomplot->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qcustomplot->sizePolicy().hasHeightForWidth());
        qcustomplot->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(qcustomplot, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 2, 0, 1, 1);


        retranslateUi(Contenido_PLOTS);

        QMetaObject::connectSlotsByName(Contenido_PLOTS);
    } // setupUi

    void retranslateUi(QWidget *Contenido_PLOTS)
    {
        Contenido_PLOTS->setWindowTitle(QCoreApplication::translate("Contenido_PLOTS", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Contenido_PLOTS", "Delta T min:", nullptr));
        IncrementradioButton->setText(QCoreApplication::translate("Contenido_PLOTS", "Increment", nullptr));
        StaticradioButton->setText(QCoreApplication::translate("Contenido_PLOTS", "Static ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Contenido_PLOTS", "Method:", nullptr));
        Diverso->setText(QCoreApplication::translate("Contenido_PLOTS", "Diverse", nullptr));
        Uniforme->setText(QCoreApplication::translate("Contenido_PLOTS", "Uniform", nullptr));
        Utext2->setText(QCoreApplication::translate("Contenido_PLOTS", "Maximun value", nullptr));
        Utext1->setText(QCoreApplication::translate("Contenido_PLOTS", "Minimun value:", nullptr));
        Utext4->setText(QCoreApplication::translate("Contenido_PLOTS", "K:", nullptr));
        Utext3->setText(QCoreApplication::translate("Contenido_PLOTS", "Increment:", nullptr));
        plot_push->setText(QCoreApplication::translate("Contenido_PLOTS", "Plot", nullptr));
        holdon_push->setText(QCoreApplication::translate("Contenido_PLOTS", "Hold on ", nullptr));
        export_push->setText(QCoreApplication::translate("Contenido_PLOTS", "Export ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contenido_PLOTS: public Ui_Contenido_PLOTS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENIDO_PLOTS_H
