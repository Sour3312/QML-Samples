/********************************************************************************
** Form generated from reading UI file 'tabladatos.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLADATOS_H
#define UI_TABLADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TablaDatos
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_6;
    QTreeView *treeView;
    QListView *listView;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QRadioButton *SIradioButton;
    QLabel *label_5;
    QGridLayout *gridLayout_5;
    QPushButton *Addcorrientes;
    QSpinBox *NumeroCorrientes;
    QComboBox *TcomboBox;
    QRadioButton *SISradioButton;
    QComboBox *FcomboBox;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_6;
    QComboBox *TypeAnalysis;
    QLabel *label_4;
    QComboBox *WcomboBox;
    QGridLayout *gridLayout_2;
    QPushButton *UploadExistinpushButton;
    QPushButton *DeleteSelpushButton;
    QPushButton *AddnewpushButton;
    QPushButton *DeleteAllpushButton;
    QPushButton *SavepushButton_2;
    QPushButton *DeleteLastpushButton;
    QPushButton *SavepushButton;
    QPushButton *DeleteFirstpushButton;
    QGridLayout *gridLayout;
    QTableWidget *Workspace;

    void setupUi(QWidget *TablaDatos)
    {
        if (TablaDatos->objectName().isEmpty())
            TablaDatos->setObjectName("TablaDatos");
        TablaDatos->resize(803, 476);
        gridLayout_4 = new QGridLayout(TablaDatos);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        treeView = new QTreeView(TablaDatos);
        treeView->setObjectName("treeView");
        treeView->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(treeView, 0, 0, 1, 1);

        listView = new QListView(TablaDatos);
        listView->setObjectName("listView");

        gridLayout_6->addWidget(listView, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 0, 0, 3, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(TablaDatos);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        SIradioButton = new QRadioButton(TablaDatos);
        SIradioButton->setObjectName("SIradioButton");
        SIradioButton->setEnabled(false);

        gridLayout_3->addWidget(SIradioButton, 3, 0, 1, 1);

        label_5 = new QLabel(TablaDatos);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 2, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        Addcorrientes = new QPushButton(TablaDatos);
        Addcorrientes->setObjectName("Addcorrientes");

        gridLayout_5->addWidget(Addcorrientes, 0, 1, 1, 1);

        NumeroCorrientes = new QSpinBox(TablaDatos);
        NumeroCorrientes->setObjectName("NumeroCorrientes");
        NumeroCorrientes->setMaximum(150);

        gridLayout_5->addWidget(NumeroCorrientes, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 1, 1, 1, 1);

        TcomboBox = new QComboBox(TablaDatos);
        TcomboBox->setObjectName("TcomboBox");
        TcomboBox->setEnabled(true);

        gridLayout_3->addWidget(TcomboBox, 4, 1, 1, 1);

        SISradioButton = new QRadioButton(TablaDatos);
        SISradioButton->setObjectName("SISradioButton");
        SISradioButton->setEnabled(false);

        gridLayout_3->addWidget(SISradioButton, 3, 1, 1, 1);

        FcomboBox = new QComboBox(TablaDatos);
        FcomboBox->setObjectName("FcomboBox");
        FcomboBox->setEnabled(true);

        gridLayout_3->addWidget(FcomboBox, 6, 1, 1, 1);

        label_3 = new QLabel(TablaDatos);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(TablaDatos);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 4, 0, 1, 1);

        line = new QFrame(TablaDatos);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 8, 0, 1, 2);

        label_6 = new QLabel(TablaDatos);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        TypeAnalysis = new QComboBox(TablaDatos);
        TypeAnalysis->addItem(QString());
        TypeAnalysis->addItem(QString());
        TypeAnalysis->addItem(QString());
        TypeAnalysis->addItem(QString());
        TypeAnalysis->addItem(QString());
        TypeAnalysis->setObjectName("TypeAnalysis");

        gridLayout_3->addWidget(TypeAnalysis, 0, 1, 1, 1);

        label_4 = new QLabel(TablaDatos);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 5, 0, 1, 1);

        WcomboBox = new QComboBox(TablaDatos);
        WcomboBox->setObjectName("WcomboBox");
        WcomboBox->setEnabled(true);

        gridLayout_3->addWidget(WcomboBox, 5, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        UploadExistinpushButton = new QPushButton(TablaDatos);
        UploadExistinpushButton->setObjectName("UploadExistinpushButton");

        gridLayout_2->addWidget(UploadExistinpushButton, 1, 0, 1, 1);

        DeleteSelpushButton = new QPushButton(TablaDatos);
        DeleteSelpushButton->setObjectName("DeleteSelpushButton");

        gridLayout_2->addWidget(DeleteSelpushButton, 0, 1, 1, 1);

        AddnewpushButton = new QPushButton(TablaDatos);
        AddnewpushButton->setObjectName("AddnewpushButton");

        gridLayout_2->addWidget(AddnewpushButton, 0, 0, 1, 1);

        DeleteAllpushButton = new QPushButton(TablaDatos);
        DeleteAllpushButton->setObjectName("DeleteAllpushButton");

        gridLayout_2->addWidget(DeleteAllpushButton, 3, 1, 1, 1);

        SavepushButton_2 = new QPushButton(TablaDatos);
        SavepushButton_2->setObjectName("SavepushButton_2");

        gridLayout_2->addWidget(SavepushButton_2, 3, 0, 1, 1);

        DeleteLastpushButton = new QPushButton(TablaDatos);
        DeleteLastpushButton->setObjectName("DeleteLastpushButton");

        gridLayout_2->addWidget(DeleteLastpushButton, 2, 1, 1, 1);

        SavepushButton = new QPushButton(TablaDatos);
        SavepushButton->setObjectName("SavepushButton");

        gridLayout_2->addWidget(SavepushButton, 2, 0, 1, 1);

        DeleteFirstpushButton = new QPushButton(TablaDatos);
        DeleteFirstpushButton->setObjectName("DeleteFirstpushButton");

        gridLayout_2->addWidget(DeleteFirstpushButton, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Workspace = new QTableWidget(TablaDatos);
        Workspace->setObjectName("Workspace");

        gridLayout->addWidget(Workspace, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 2, 1, 1, 1);


        retranslateUi(TablaDatos);

        QMetaObject::connectSlotsByName(TablaDatos);
    } // setupUi

    void retranslateUi(QWidget *TablaDatos)
    {
        TablaDatos->setWindowTitle(QCoreApplication::translate("TablaDatos", "Form", nullptr));
        label->setText(QCoreApplication::translate("TablaDatos", "Number of streams:", nullptr));
        SIradioButton->setText(QCoreApplication::translate("TablaDatos", "English system", nullptr));
        label_5->setText(QCoreApplication::translate("TablaDatos", "Select a system of units:", nullptr));
        Addcorrientes->setText(QCoreApplication::translate("TablaDatos", "Add...", nullptr));
        SISradioButton->setText(QCoreApplication::translate("TablaDatos", "International system", nullptr));
        label_3->setText(QCoreApplication::translate("TablaDatos", "Film Coefficient:", nullptr));
        label_2->setText(QCoreApplication::translate("TablaDatos", "Temperature:", nullptr));
        label_6->setText(QCoreApplication::translate("TablaDatos", "Type of analysis:", nullptr));
        TypeAnalysis->setItemText(0, QCoreApplication::translate("TablaDatos", "Select one...", nullptr));
        TypeAnalysis->setItemText(1, QCoreApplication::translate("TablaDatos", "Problem Table", nullptr));
        TypeAnalysis->setItemText(2, QCoreApplication::translate("TablaDatos", "Area Prediction", nullptr));
        TypeAnalysis->setItemText(3, QCoreApplication::translate("TablaDatos", "Cost Prediction", nullptr));
        TypeAnalysis->setItemText(4, QCoreApplication::translate("TablaDatos", "All", nullptr));

        label_4->setText(QCoreApplication::translate("TablaDatos", "WCp:", nullptr));
        UploadExistinpushButton->setText(QCoreApplication::translate("TablaDatos", "Upload file to existing", nullptr));
        DeleteSelpushButton->setText(QCoreApplication::translate("TablaDatos", "Delete selected", nullptr));
        AddnewpushButton->setText(QCoreApplication::translate("TablaDatos", "Add new stream", nullptr));
        DeleteAllpushButton->setText(QCoreApplication::translate("TablaDatos", "Delete all", nullptr));
        SavepushButton_2->setText(QCoreApplication::translate("TablaDatos", "Save as", nullptr));
        DeleteLastpushButton->setText(QCoreApplication::translate("TablaDatos", "Delete last", nullptr));
        SavepushButton->setText(QCoreApplication::translate("TablaDatos", "Save ", nullptr));
        DeleteFirstpushButton->setText(QCoreApplication::translate("TablaDatos", "Delete first", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TablaDatos: public Ui_TablaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLADATOS_H
