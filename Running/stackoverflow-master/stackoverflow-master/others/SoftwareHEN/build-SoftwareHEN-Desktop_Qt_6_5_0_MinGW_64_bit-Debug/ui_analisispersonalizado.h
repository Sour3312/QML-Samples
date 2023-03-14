/********************************************************************************
** Form generated from reading UI file 'analisispersonalizado.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALISISPERSONALIZADO_H
#define UI_ANALISISPERSONALIZADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalisisPersonalizado
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *uniform;
    QGridLayout *gridLayout_7;
    QGridLayout *checkboxesinfo;
    QCheckBox *UCP;
    QCheckBox *UAP;
    QCheckBox *UPT;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *checkbovesgrap;
    QCheckBox *UHCC;
    QCheckBox *UADTM;
    QCheckBox *UCDTM;
    QCheckBox *UCCC;
    QCheckBox *UGCC;
    QCheckBox *UCC;
    QCheckBox *UCCA;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *DeltaHeader;
    QLabel *Utext1;
    QVBoxLayout *InfoAvaHeader;
    QLabel *Utext2;
    QVBoxLayout *GraphiHeader;
    QLabel *Utext5;
    QGridLayout *Static_Increment;
    QRadioButton *IncrementradioButton;
    QDoubleSpinBox *Minimun;
    QDoubleSpinBox *Maximun;
    QLabel *Utext10;
    QRadioButton *StaticradioButton;
    QDoubleSpinBox *Increment;
    QLabel *Utext11;
    QLabel *Utext9;
    QSpacerItem *verticalSpacer_5;
    QFrame *line;
    QFrame *line_2;
    QVBoxLayout *AreaHeader;
    QLabel *Utext4;
    QHBoxLayout *Typeofdesign;
    QHBoxLayout *contenido;
    QLabel *Utext7;
    QComboBox *UTodcomboBox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *CostHeader;
    QLabel *Utext3;
    QGridLayout *Costos;
    QLabel *UAVISO;
    QLabel *Utext8;
    QTableWidget *UtableOperation;
    QTableWidget *UtableCapital;
    QGridLayout *Capitalcost;
    QLabel *Utext6;
    QComboBox *UFCapcomboBox;
    QSpacerItem *horizontalSpacer_3;
    QWidget *diverse;
    QGridLayout *gridLayout_2;
    QVBoxLayout *D_InfoHeader;
    QLabel *Dtext2;
    QVBoxLayout *D_Typeofesign;
    QGridLayout *D_contenido;
    QLabel *Dtext11;
    QComboBox *DTodcomboBox;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *D_DeltaHeader;
    QLabel *Dtext1;
    QGridLayout *D_Static_Increment;
    QDoubleSpinBox *Dincrement;
    QLabel *Dtext4;
    QDoubleSpinBox *Dminimun;
    QDoubleSpinBox *Dmaximun;
    QRadioButton *DIncrementradioButton;
    QLabel *Dtext5;
    QLabel *Dtext7;
    QDoubleSpinBox *Dk;
    QRadioButton *DStaticradioButton;
    QLabel *Dtext6;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *D_AreaHeader;
    QLabel *Dtext9;
    QGridLayout *D_Costos;
    QLabel *Dtext12;
    QTableWidget *DtableCapital;
    QTableWidget *DtableOperation;
    QGridLayout *Capitalcost_2;
    QLabel *Dtext10;
    QComboBox *DFCapcomboBox;
    QSpacerItem *horizontalSpacer_5;
    QLabel *DAVISO;
    QGridLayout *D_checkboxesinfo;
    QCheckBox *DCP;
    QCheckBox *DAP;
    QCheckBox *DPT;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *D_CostHeader;
    QLabel *Dtext8;
    QFrame *line_4;
    QVBoxLayout *D_graphiHeader;
    QLabel *Dtext3;
    QFrame *line_3;
    QGridLayout *D_checkboxesgrap;
    QCheckBox *DCCA;
    QCheckBox *DHCC;
    QCheckBox *DCDTM;
    QCheckBox *DCC;
    QCheckBox *DGCC;
    QCheckBox *DADTM;
    QCheckBox *DCCC;
    QSpacerItem *verticalSpacer;
    QWidget *both;
    QGridLayout *gridLayout_3;
    QPushButton *CANCEL;
    QPushButton *OK;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AnalisisPersonalizado)
    {
        if (AnalisisPersonalizado->objectName().isEmpty())
            AnalisisPersonalizado->setObjectName("AnalisisPersonalizado");
        AnalisisPersonalizado->resize(560, 556);
        gridLayout = new QGridLayout(AnalisisPersonalizado);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(AnalisisPersonalizado);
        tabWidget->setObjectName("tabWidget");
        uniform = new QWidget();
        uniform->setObjectName("uniform");
        gridLayout_7 = new QGridLayout(uniform);
        gridLayout_7->setObjectName("gridLayout_7");
        checkboxesinfo = new QGridLayout();
        checkboxesinfo->setObjectName("checkboxesinfo");
        UCP = new QCheckBox(uniform);
        UCP->setObjectName("UCP");

        checkboxesinfo->addWidget(UCP, 2, 0, 1, 1);

        UAP = new QCheckBox(uniform);
        UAP->setObjectName("UAP");

        checkboxesinfo->addWidget(UAP, 1, 0, 1, 1);

        UPT = new QCheckBox(uniform);
        UPT->setObjectName("UPT");

        checkboxesinfo->addWidget(UPT, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        checkboxesinfo->addItem(verticalSpacer_3, 3, 0, 1, 1);


        gridLayout_7->addLayout(checkboxesinfo, 1, 3, 1, 1);

        checkbovesgrap = new QGridLayout();
        checkbovesgrap->setObjectName("checkbovesgrap");
        UHCC = new QCheckBox(uniform);
        UHCC->setObjectName("UHCC");

        checkbovesgrap->addWidget(UHCC, 0, 0, 1, 1);

        UADTM = new QCheckBox(uniform);
        UADTM->setObjectName("UADTM");

        checkbovesgrap->addWidget(UADTM, 5, 0, 1, 1);

        UCDTM = new QCheckBox(uniform);
        UCDTM->setObjectName("UCDTM");

        checkbovesgrap->addWidget(UCDTM, 6, 0, 1, 1);

        UCCC = new QCheckBox(uniform);
        UCCC->setObjectName("UCCC");

        checkbovesgrap->addWidget(UCCC, 1, 0, 1, 1);

        UGCC = new QCheckBox(uniform);
        UGCC->setObjectName("UGCC");

        checkbovesgrap->addWidget(UGCC, 4, 0, 1, 1);

        UCC = new QCheckBox(uniform);
        UCC->setObjectName("UCC");

        checkbovesgrap->addWidget(UCC, 2, 0, 1, 1);

        UCCA = new QCheckBox(uniform);
        UCCA->setObjectName("UCCA");

        checkbovesgrap->addWidget(UCCA, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        checkbovesgrap->addItem(verticalSpacer_4, 7, 0, 1, 1);


        gridLayout_7->addLayout(checkbovesgrap, 4, 3, 4, 1);

        DeltaHeader = new QVBoxLayout();
        DeltaHeader->setObjectName("DeltaHeader");
        Utext1 = new QLabel(uniform);
        Utext1->setObjectName("Utext1");
        Utext1->setAlignment(Qt::AlignCenter);

        DeltaHeader->addWidget(Utext1);


        gridLayout_7->addLayout(DeltaHeader, 0, 0, 1, 2);

        InfoAvaHeader = new QVBoxLayout();
        InfoAvaHeader->setObjectName("InfoAvaHeader");
        Utext2 = new QLabel(uniform);
        Utext2->setObjectName("Utext2");
        Utext2->setAlignment(Qt::AlignCenter);

        InfoAvaHeader->addWidget(Utext2);


        gridLayout_7->addLayout(InfoAvaHeader, 0, 3, 1, 1);

        GraphiHeader = new QVBoxLayout();
        GraphiHeader->setObjectName("GraphiHeader");
        Utext5 = new QLabel(uniform);
        Utext5->setObjectName("Utext5");
        Utext5->setAlignment(Qt::AlignCenter);

        GraphiHeader->addWidget(Utext5);


        gridLayout_7->addLayout(GraphiHeader, 2, 3, 1, 1);

        Static_Increment = new QGridLayout();
        Static_Increment->setObjectName("Static_Increment");
        IncrementradioButton = new QRadioButton(uniform);
        IncrementradioButton->setObjectName("IncrementradioButton");

        Static_Increment->addWidget(IncrementradioButton, 0, 1, 1, 1);

        Minimun = new QDoubleSpinBox(uniform);
        Minimun->setObjectName("Minimun");
        Minimun->setEnabled(true);
        Minimun->setMaximum(999999999.990000009536743);

        Static_Increment->addWidget(Minimun, 1, 1, 1, 1);

        Maximun = new QDoubleSpinBox(uniform);
        Maximun->setObjectName("Maximun");
        Maximun->setMaximum(999999999.990000009536743);

        Static_Increment->addWidget(Maximun, 2, 1, 1, 1);

        Utext10 = new QLabel(uniform);
        Utext10->setObjectName("Utext10");

        Static_Increment->addWidget(Utext10, 2, 0, 1, 1);

        StaticradioButton = new QRadioButton(uniform);
        StaticradioButton->setObjectName("StaticradioButton");

        Static_Increment->addWidget(StaticradioButton, 0, 0, 1, 1);

        Increment = new QDoubleSpinBox(uniform);
        Increment->setObjectName("Increment");
        Increment->setDecimals(2);
        Increment->setMaximum(999999999.990000009536743);

        Static_Increment->addWidget(Increment, 3, 1, 1, 1);

        Utext11 = new QLabel(uniform);
        Utext11->setObjectName("Utext11");

        Static_Increment->addWidget(Utext11, 3, 0, 1, 1);

        Utext9 = new QLabel(uniform);
        Utext9->setObjectName("Utext9");
        Utext9->setEnabled(true);
        Utext9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        Static_Increment->addWidget(Utext9, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        Static_Increment->addItem(verticalSpacer_5, 1, 2, 3, 1);


        gridLayout_7->addLayout(Static_Increment, 1, 0, 2, 2);

        line = new QFrame(uniform);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 3, 0, 1, 2);

        line_2 = new QFrame(uniform);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 0, 2, 8, 1);

        AreaHeader = new QVBoxLayout();
        AreaHeader->setObjectName("AreaHeader");
        Utext4 = new QLabel(uniform);
        Utext4->setObjectName("Utext4");
        Utext4->setEnabled(false);
        Utext4->setAlignment(Qt::AlignCenter);

        AreaHeader->addWidget(Utext4);


        gridLayout_7->addLayout(AreaHeader, 4, 0, 1, 2);

        Typeofdesign = new QHBoxLayout();
        Typeofdesign->setObjectName("Typeofdesign");
        contenido = new QHBoxLayout();
        contenido->setObjectName("contenido");
        Utext7 = new QLabel(uniform);
        Utext7->setObjectName("Utext7");
        Utext7->setEnabled(false);

        contenido->addWidget(Utext7);

        UTodcomboBox = new QComboBox(uniform);
        UTodcomboBox->addItem(QString());
        UTodcomboBox->addItem(QString());
        UTodcomboBox->addItem(QString());
        UTodcomboBox->setObjectName("UTodcomboBox");
        UTodcomboBox->setEnabled(false);

        contenido->addWidget(UTodcomboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        contenido->addItem(horizontalSpacer_2);


        Typeofdesign->addLayout(contenido);


        gridLayout_7->addLayout(Typeofdesign, 5, 0, 1, 2);

        CostHeader = new QVBoxLayout();
        CostHeader->setObjectName("CostHeader");
        Utext3 = new QLabel(uniform);
        Utext3->setObjectName("Utext3");
        Utext3->setEnabled(false);
        Utext3->setAlignment(Qt::AlignCenter);

        CostHeader->addWidget(Utext3);


        gridLayout_7->addLayout(CostHeader, 6, 0, 1, 2);

        Costos = new QGridLayout();
        Costos->setObjectName("Costos");
        UAVISO = new QLabel(uniform);
        UAVISO->setObjectName("UAVISO");

        Costos->addWidget(UAVISO, 3, 1, 1, 2);

        Utext8 = new QLabel(uniform);
        Utext8->setObjectName("Utext8");
        Utext8->setEnabled(false);

        Costos->addWidget(Utext8, 4, 1, 1, 2);

        UtableOperation = new QTableWidget(uniform);
        UtableOperation->setObjectName("UtableOperation");
        UtableOperation->setEnabled(false);

        Costos->addWidget(UtableOperation, 5, 1, 1, 2);

        UtableCapital = new QTableWidget(uniform);
        UtableCapital->setObjectName("UtableCapital");
        UtableCapital->setEnabled(false);

        Costos->addWidget(UtableCapital, 2, 1, 1, 2);

        Capitalcost = new QGridLayout();
        Capitalcost->setObjectName("Capitalcost");
        Utext6 = new QLabel(uniform);
        Utext6->setObjectName("Utext6");
        Utext6->setEnabled(false);

        Capitalcost->addWidget(Utext6, 0, 0, 1, 1);

        UFCapcomboBox = new QComboBox(uniform);
        UFCapcomboBox->addItem(QString());
        UFCapcomboBox->addItem(QString());
        UFCapcomboBox->addItem(QString());
        UFCapcomboBox->setObjectName("UFCapcomboBox");
        UFCapcomboBox->setEnabled(false);

        Capitalcost->addWidget(UFCapcomboBox, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        Capitalcost->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        Costos->addLayout(Capitalcost, 1, 1, 1, 2);


        gridLayout_7->addLayout(Costos, 7, 0, 1, 2);

        tabWidget->addTab(uniform, QString());
        diverse = new QWidget();
        diverse->setObjectName("diverse");
        gridLayout_2 = new QGridLayout(diverse);
        gridLayout_2->setObjectName("gridLayout_2");
        D_InfoHeader = new QVBoxLayout();
        D_InfoHeader->setObjectName("D_InfoHeader");
        Dtext2 = new QLabel(diverse);
        Dtext2->setObjectName("Dtext2");
        Dtext2->setAlignment(Qt::AlignCenter);

        D_InfoHeader->addWidget(Dtext2);


        gridLayout_2->addLayout(D_InfoHeader, 0, 3, 1, 1);

        D_Typeofesign = new QVBoxLayout();
        D_Typeofesign->setObjectName("D_Typeofesign");
        D_contenido = new QGridLayout();
        D_contenido->setObjectName("D_contenido");
        Dtext11 = new QLabel(diverse);
        Dtext11->setObjectName("Dtext11");
        Dtext11->setEnabled(false);
        Dtext11->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        D_contenido->addWidget(Dtext11, 0, 0, 1, 1);

        DTodcomboBox = new QComboBox(diverse);
        DTodcomboBox->addItem(QString());
        DTodcomboBox->addItem(QString());
        DTodcomboBox->addItem(QString());
        DTodcomboBox->setObjectName("DTodcomboBox");
        DTodcomboBox->setEnabled(false);

        D_contenido->addWidget(DTodcomboBox, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        D_contenido->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        D_Typeofesign->addLayout(D_contenido);


        gridLayout_2->addLayout(D_Typeofesign, 6, 0, 1, 2);

        D_DeltaHeader = new QVBoxLayout();
        D_DeltaHeader->setObjectName("D_DeltaHeader");
        Dtext1 = new QLabel(diverse);
        Dtext1->setObjectName("Dtext1");
        Dtext1->setAlignment(Qt::AlignCenter);

        D_DeltaHeader->addWidget(Dtext1);


        gridLayout_2->addLayout(D_DeltaHeader, 0, 0, 1, 2);

        D_Static_Increment = new QGridLayout();
        D_Static_Increment->setObjectName("D_Static_Increment");
        Dincrement = new QDoubleSpinBox(diverse);
        Dincrement->setObjectName("Dincrement");
        Dincrement->setDecimals(2);
        Dincrement->setMaximum(999999999.990000009536743);

        D_Static_Increment->addWidget(Dincrement, 4, 1, 1, 1);

        Dtext4 = new QLabel(diverse);
        Dtext4->setObjectName("Dtext4");
        Dtext4->setEnabled(true);
        Dtext4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        D_Static_Increment->addWidget(Dtext4, 2, 0, 1, 1);

        Dminimun = new QDoubleSpinBox(diverse);
        Dminimun->setObjectName("Dminimun");
        Dminimun->setEnabled(true);
        Dminimun->setMaximum(999999999.990000009536743);

        D_Static_Increment->addWidget(Dminimun, 2, 1, 1, 1);

        Dmaximun = new QDoubleSpinBox(diverse);
        Dmaximun->setObjectName("Dmaximun");
        Dmaximun->setMaximum(999999999.990000009536743);

        D_Static_Increment->addWidget(Dmaximun, 3, 1, 1, 1);

        DIncrementradioButton = new QRadioButton(diverse);
        DIncrementradioButton->setObjectName("DIncrementradioButton");

        D_Static_Increment->addWidget(DIncrementradioButton, 0, 1, 1, 1);

        Dtext5 = new QLabel(diverse);
        Dtext5->setObjectName("Dtext5");

        D_Static_Increment->addWidget(Dtext5, 3, 0, 1, 1);

        Dtext7 = new QLabel(diverse);
        Dtext7->setObjectName("Dtext7");
        Dtext7->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        D_Static_Increment->addWidget(Dtext7, 1, 0, 1, 1);

        Dk = new QDoubleSpinBox(diverse);
        Dk->setObjectName("Dk");
        Dk->setDecimals(2);
        Dk->setMaximum(10.000000000000000);

        D_Static_Increment->addWidget(Dk, 1, 1, 1, 1);

        DStaticradioButton = new QRadioButton(diverse);
        DStaticradioButton->setObjectName("DStaticradioButton");

        D_Static_Increment->addWidget(DStaticradioButton, 0, 0, 1, 1);

        Dtext6 = new QLabel(diverse);
        Dtext6->setObjectName("Dtext6");

        D_Static_Increment->addWidget(Dtext6, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        D_Static_Increment->addItem(verticalSpacer_6, 1, 2, 4, 1);


        gridLayout_2->addLayout(D_Static_Increment, 1, 0, 3, 2);

        D_AreaHeader = new QVBoxLayout();
        D_AreaHeader->setObjectName("D_AreaHeader");
        Dtext9 = new QLabel(diverse);
        Dtext9->setObjectName("Dtext9");
        Dtext9->setEnabled(false);
        Dtext9->setAlignment(Qt::AlignCenter);

        D_AreaHeader->addWidget(Dtext9);


        gridLayout_2->addLayout(D_AreaHeader, 5, 0, 1, 2);

        D_Costos = new QGridLayout();
        D_Costos->setObjectName("D_Costos");
        Dtext12 = new QLabel(diverse);
        Dtext12->setObjectName("Dtext12");
        Dtext12->setEnabled(false);
        Dtext12->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        D_Costos->addWidget(Dtext12, 3, 1, 1, 2);

        DtableCapital = new QTableWidget(diverse);
        DtableCapital->setObjectName("DtableCapital");
        DtableCapital->setEnabled(false);

        D_Costos->addWidget(DtableCapital, 1, 1, 1, 2);

        DtableOperation = new QTableWidget(diverse);
        DtableOperation->setObjectName("DtableOperation");
        DtableOperation->setEnabled(false);

        D_Costos->addWidget(DtableOperation, 4, 1, 1, 2);

        Capitalcost_2 = new QGridLayout();
        Capitalcost_2->setObjectName("Capitalcost_2");
        Dtext10 = new QLabel(diverse);
        Dtext10->setObjectName("Dtext10");
        Dtext10->setEnabled(false);
        Dtext10->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        Capitalcost_2->addWidget(Dtext10, 0, 0, 1, 1);

        DFCapcomboBox = new QComboBox(diverse);
        DFCapcomboBox->addItem(QString());
        DFCapcomboBox->addItem(QString());
        DFCapcomboBox->addItem(QString());
        DFCapcomboBox->setObjectName("DFCapcomboBox");
        DFCapcomboBox->setEnabled(false);

        Capitalcost_2->addWidget(DFCapcomboBox, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        Capitalcost_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        D_Costos->addLayout(Capitalcost_2, 0, 1, 1, 2);

        DAVISO = new QLabel(diverse);
        DAVISO->setObjectName("DAVISO");

        D_Costos->addWidget(DAVISO, 2, 1, 1, 2);


        gridLayout_2->addLayout(D_Costos, 8, 0, 1, 2);

        D_checkboxesinfo = new QGridLayout();
        D_checkboxesinfo->setObjectName("D_checkboxesinfo");
        DCP = new QCheckBox(diverse);
        DCP->setObjectName("DCP");

        D_checkboxesinfo->addWidget(DCP, 2, 0, 1, 1);

        DAP = new QCheckBox(diverse);
        DAP->setObjectName("DAP");

        D_checkboxesinfo->addWidget(DAP, 1, 0, 1, 1);

        DPT = new QCheckBox(diverse);
        DPT->setObjectName("DPT");

        D_checkboxesinfo->addWidget(DPT, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        D_checkboxesinfo->addItem(verticalSpacer_2, 3, 0, 1, 1);


        gridLayout_2->addLayout(D_checkboxesinfo, 1, 3, 1, 1);

        D_CostHeader = new QVBoxLayout();
        D_CostHeader->setObjectName("D_CostHeader");
        Dtext8 = new QLabel(diverse);
        Dtext8->setObjectName("Dtext8");
        Dtext8->setEnabled(false);
        Dtext8->setAlignment(Qt::AlignCenter);

        D_CostHeader->addWidget(Dtext8);


        gridLayout_2->addLayout(D_CostHeader, 7, 0, 1, 2);

        line_4 = new QFrame(diverse);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 2, 9, 1);

        D_graphiHeader = new QVBoxLayout();
        D_graphiHeader->setObjectName("D_graphiHeader");
        Dtext3 = new QLabel(diverse);
        Dtext3->setObjectName("Dtext3");
        Dtext3->setAlignment(Qt::AlignCenter);

        D_graphiHeader->addWidget(Dtext3);


        gridLayout_2->addLayout(D_graphiHeader, 2, 3, 2, 1);

        line_3 = new QFrame(diverse);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 4, 0, 1, 2);

        D_checkboxesgrap = new QGridLayout();
        D_checkboxesgrap->setObjectName("D_checkboxesgrap");
        DCCA = new QCheckBox(diverse);
        DCCA->setObjectName("DCCA");

        D_checkboxesgrap->addWidget(DCCA, 3, 0, 1, 1);

        DHCC = new QCheckBox(diverse);
        DHCC->setObjectName("DHCC");

        D_checkboxesgrap->addWidget(DHCC, 0, 0, 1, 1);

        DCDTM = new QCheckBox(diverse);
        DCDTM->setObjectName("DCDTM");

        D_checkboxesgrap->addWidget(DCDTM, 6, 0, 1, 1);

        DCC = new QCheckBox(diverse);
        DCC->setObjectName("DCC");

        D_checkboxesgrap->addWidget(DCC, 2, 0, 1, 1);

        DGCC = new QCheckBox(diverse);
        DGCC->setObjectName("DGCC");

        D_checkboxesgrap->addWidget(DGCC, 4, 0, 1, 1);

        DADTM = new QCheckBox(diverse);
        DADTM->setObjectName("DADTM");

        D_checkboxesgrap->addWidget(DADTM, 5, 0, 1, 1);

        DCCC = new QCheckBox(diverse);
        DCCC->setObjectName("DCCC");

        D_checkboxesgrap->addWidget(DCCC, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        D_checkboxesgrap->addItem(verticalSpacer, 7, 0, 1, 1);


        gridLayout_2->addLayout(D_checkboxesgrap, 5, 3, 4, 1);

        tabWidget->addTab(diverse, QString());
        both = new QWidget();
        both->setObjectName("both");
        tabWidget->addTab(both, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        CANCEL = new QPushButton(AnalisisPersonalizado);
        CANCEL->setObjectName("CANCEL");

        gridLayout_3->addWidget(CANCEL, 0, 2, 1, 1);

        OK = new QPushButton(AnalisisPersonalizado);
        OK->setObjectName("OK");

        gridLayout_3->addWidget(OK, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 1);

        tabWidget->raise();
        DAVISO->raise();

        retranslateUi(AnalisisPersonalizado);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AnalisisPersonalizado);
    } // setupUi

    void retranslateUi(QWidget *AnalisisPersonalizado)
    {
        AnalisisPersonalizado->setWindowTitle(QCoreApplication::translate("AnalisisPersonalizado", "Form", nullptr));
        UCP->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost Prediction", nullptr));
        UAP->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area Prediction", nullptr));
        UPT->setText(QCoreApplication::translate("AnalisisPersonalizado", "Problem Table", nullptr));
        UHCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Hot compositive curve", nullptr));
        UADTM->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area vs Delta T minimun", nullptr));
        UCDTM->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost vs Delta T minimun", nullptr));
        UCCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cold compositive curve", nullptr));
        UGCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Grand Compositive Curve", nullptr));
        UCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Compositive curve", nullptr));
        UCCA->setText(QCoreApplication::translate("AnalisisPersonalizado", "Compositive curve adjusted", nullptr));
        Utext1->setText(QCoreApplication::translate("AnalisisPersonalizado", " Delta T minimun", nullptr));
        Utext2->setText(QCoreApplication::translate("AnalisisPersonalizado", "Information available", nullptr));
        Utext5->setText(QCoreApplication::translate("AnalisisPersonalizado", "Graphics available", nullptr));
        IncrementradioButton->setText(QCoreApplication::translate("AnalisisPersonalizado", "Increment", nullptr));
        Utext10->setText(QCoreApplication::translate("AnalisisPersonalizado", "Maximun Value", nullptr));
        StaticradioButton->setText(QCoreApplication::translate("AnalisisPersonalizado", "Static ", nullptr));
        Utext11->setText(QCoreApplication::translate("AnalisisPersonalizado", "Increment:", nullptr));
        Utext9->setText(QCoreApplication::translate("AnalisisPersonalizado", "Minimun Value:", nullptr));
        Utext4->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area Requirements", nullptr));
        Utext7->setText(QCoreApplication::translate("AnalisisPersonalizado", "Type of design:", nullptr));
        UTodcomboBox->setItemText(0, QCoreApplication::translate("AnalisisPersonalizado", "Select one...", nullptr));
        UTodcomboBox->setItemText(1, QCoreApplication::translate("AnalisisPersonalizado", "Countercurrent", nullptr));
        UTodcomboBox->setItemText(2, QCoreApplication::translate("AnalisisPersonalizado", "Cocurrent", nullptr));

        Utext3->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost requirements", nullptr));
        UAVISO->setText(QString());
        Utext8->setText(QCoreApplication::translate("AnalisisPersonalizado", "Operation Cost:", nullptr));
        Utext6->setText(QCoreApplication::translate("AnalisisPersonalizado", "Capital Cost:", nullptr));
        UFCapcomboBox->setItemText(0, QCoreApplication::translate("AnalisisPersonalizado", "Select one...", nullptr));
        UFCapcomboBox->setItemText(1, QCoreApplication::translate("AnalisisPersonalizado", "a+b*(A)^c   ", nullptr));
        UFCapcomboBox->setItemText(2, QCoreApplication::translate("AnalisisPersonalizado", "b*(A)^c  ", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(uniform), QCoreApplication::translate("AnalisisPersonalizado", "Uniform", nullptr));
        Dtext2->setText(QCoreApplication::translate("AnalisisPersonalizado", "Information available", nullptr));
        Dtext11->setText(QCoreApplication::translate("AnalisisPersonalizado", "Type of design:", nullptr));
        DTodcomboBox->setItemText(0, QCoreApplication::translate("AnalisisPersonalizado", "Select one...", nullptr));
        DTodcomboBox->setItemText(1, QCoreApplication::translate("AnalisisPersonalizado", "Countercurrent", nullptr));
        DTodcomboBox->setItemText(2, QCoreApplication::translate("AnalisisPersonalizado", "Cocurrent", nullptr));

        Dtext1->setText(QCoreApplication::translate("AnalisisPersonalizado", " Delta T minimun", nullptr));
        Dtext4->setText(QCoreApplication::translate("AnalisisPersonalizado", "Minimun Value:", nullptr));
        DIncrementradioButton->setText(QCoreApplication::translate("AnalisisPersonalizado", "Increment", nullptr));
        Dtext5->setText(QCoreApplication::translate("AnalisisPersonalizado", "Maximun Value", nullptr));
        Dtext7->setText(QCoreApplication::translate("AnalisisPersonalizado", "K:", nullptr));
        DStaticradioButton->setText(QCoreApplication::translate("AnalisisPersonalizado", "Static ", nullptr));
        Dtext6->setText(QCoreApplication::translate("AnalisisPersonalizado", "Increment:", nullptr));
        Dtext9->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area Requirements", nullptr));
        Dtext12->setText(QCoreApplication::translate("AnalisisPersonalizado", "Operation Cost:", nullptr));
        Dtext10->setText(QCoreApplication::translate("AnalisisPersonalizado", "Capital Cost:", nullptr));
        DFCapcomboBox->setItemText(0, QCoreApplication::translate("AnalisisPersonalizado", "Select one...", nullptr));
        DFCapcomboBox->setItemText(1, QCoreApplication::translate("AnalisisPersonalizado", "a+b*(A)^c   ", nullptr));
        DFCapcomboBox->setItemText(2, QCoreApplication::translate("AnalisisPersonalizado", "b*(A)^c  ", nullptr));

        DAVISO->setText(QString());
        DCP->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost Prediction", nullptr));
        DAP->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area Prediction", nullptr));
        DPT->setText(QCoreApplication::translate("AnalisisPersonalizado", "Problem Table", nullptr));
        Dtext8->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost requirements", nullptr));
        Dtext3->setText(QCoreApplication::translate("AnalisisPersonalizado", "Graphics available", nullptr));
        DCCA->setText(QCoreApplication::translate("AnalisisPersonalizado", "Compositive curve adjusted", nullptr));
        DHCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Hot compositive curve", nullptr));
        DCDTM->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cost vs Delta T minimun", nullptr));
        DCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Compositive curve", nullptr));
        DGCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Grand Compositive Curve", nullptr));
        DADTM->setText(QCoreApplication::translate("AnalisisPersonalizado", "Area vs Delta T minimun", nullptr));
        DCCC->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cold compositive curve", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(diverse), QCoreApplication::translate("AnalisisPersonalizado", "Diverse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(both), QCoreApplication::translate("AnalisisPersonalizado", " Both", nullptr));
        CANCEL->setText(QCoreApplication::translate("AnalisisPersonalizado", "Cancel", nullptr));
        OK->setText(QCoreApplication::translate("AnalisisPersonalizado", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalisisPersonalizado: public Ui_AnalisisPersonalizado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALISISPERSONALIZADO_H
