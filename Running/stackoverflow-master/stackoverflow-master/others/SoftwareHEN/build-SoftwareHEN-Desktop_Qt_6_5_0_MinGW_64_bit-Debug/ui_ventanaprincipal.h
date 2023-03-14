/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionClose;
    QAction *actionHelp;
    QAction *actionCustom_Analysis;
    QAction *actionArea_Targets;
    QAction *actionSuper_Targeting;
    QAction *actionProblem_Table;
    QAction *actionArea_Targets_2;
    QAction *actionSuper_Targeting_2;
    QAction *actionReport_Options;
    QAction *actionNetwork_Design;
    QAction *actionAbour_SHEN;
    QAction *actionHelp_Topics;
    QAction *actionUndo;
    QAction *actionUndo_2;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClean;
    QAction *actionElminate;
    QAction *actionElimnate_all;
    QAction *actionPlots;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPlots;
    QMenu *menuSummary;
    QMenu *menuLanguage;
    QMenu *menuContact;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName("VentanaPrincipal");
        VentanaPrincipal->resize(649, 340);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VentanaPrincipal->sizePolicy().hasHeightForWidth());
        VentanaPrincipal->setSizePolicy(sizePolicy);
        VentanaPrincipal->setMinimumSize(QSize(0, 0));
        VentanaPrincipal->setMaximumSize(QSize(16777215, 16777215));
        VentanaPrincipal->setAutoFillBackground(true);
        actionNew = new QAction(VentanaPrincipal);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Resources/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(VentanaPrincipal);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/Resources/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(VentanaPrincipal);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/Resources/SAVE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(VentanaPrincipal);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/Resources/SAVEAS.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionClose = new QAction(VentanaPrincipal);
        actionClose->setObjectName("actionClose");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/Resources/cerrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon4);
        actionHelp = new QAction(VentanaPrincipal);
        actionHelp->setObjectName("actionHelp");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/Resources/ayuda.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon5);
        actionCustom_Analysis = new QAction(VentanaPrincipal);
        actionCustom_Analysis->setObjectName("actionCustom_Analysis");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/Resources/custom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCustom_Analysis->setIcon(icon6);
        actionArea_Targets = new QAction(VentanaPrincipal);
        actionArea_Targets->setObjectName("actionArea_Targets");
        actionSuper_Targeting = new QAction(VentanaPrincipal);
        actionSuper_Targeting->setObjectName("actionSuper_Targeting");
        actionProblem_Table = new QAction(VentanaPrincipal);
        actionProblem_Table->setObjectName("actionProblem_Table");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/Resources/table-icon-png-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProblem_Table->setIcon(icon7);
        actionArea_Targets_2 = new QAction(VentanaPrincipal);
        actionArea_Targets_2->setObjectName("actionArea_Targets_2");
        actionSuper_Targeting_2 = new QAction(VentanaPrincipal);
        actionSuper_Targeting_2->setObjectName("actionSuper_Targeting_2");
        actionReport_Options = new QAction(VentanaPrincipal);
        actionReport_Options->setObjectName("actionReport_Options");
        actionNetwork_Design = new QAction(VentanaPrincipal);
        actionNetwork_Design->setObjectName("actionNetwork_Design");
        actionAbour_SHEN = new QAction(VentanaPrincipal);
        actionAbour_SHEN->setObjectName("actionAbour_SHEN");
        actionHelp_Topics = new QAction(VentanaPrincipal);
        actionHelp_Topics->setObjectName("actionHelp_Topics");
        actionUndo = new QAction(VentanaPrincipal);
        actionUndo->setObjectName("actionUndo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/Resources/Redo-ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon8);
        actionUndo_2 = new QAction(VentanaPrincipal);
        actionUndo_2->setObjectName("actionUndo_2");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/Resources/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo_2->setIcon(icon9);
        actionCut = new QAction(VentanaPrincipal);
        actionCut->setObjectName("actionCut");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionCopy = new QAction(VentanaPrincipal);
        actionCopy->setObjectName("actionCopy");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/Resources/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionPaste = new QAction(VentanaPrincipal);
        actionPaste->setObjectName("actionPaste");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/Resources/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon12);
        actionClean = new QAction(VentanaPrincipal);
        actionClean->setObjectName("actionClean");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/Resources/Clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClean->setIcon(icon13);
        actionElminate = new QAction(VentanaPrincipal);
        actionElminate->setObjectName("actionElminate");
        actionElimnate_all = new QAction(VentanaPrincipal);
        actionElimnate_all->setObjectName("actionElimnate_all");
        actionPlots = new QAction(VentanaPrincipal);
        actionPlots->setObjectName("actionPlots");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/Resources/plots.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlots->setIcon(icon14);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName("mdiArea");

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 649, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuPlots = new QMenu(menuBar);
        menuPlots->setObjectName("menuPlots");
        menuSummary = new QMenu(menuBar);
        menuSummary->setObjectName("menuSummary");
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName("menuLanguage");
        menuContact = new QMenu(menuBar);
        menuContact->setObjectName("menuContact");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName("mainToolBar");
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName("statusBar");
        VentanaPrincipal->setStatusBar(statusBar);
        toolBar = new QToolBar(VentanaPrincipal);
        toolBar->setObjectName("toolBar");
        VentanaPrincipal->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(VentanaPrincipal);
        toolBar_2->setObjectName("toolBar_2");
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuPlots->menuAction());
        menuBar->addAction(menuSummary->menuAction());
        menuBar->addAction(menuLanguage->menuAction());
        menuBar->addAction(menuContact->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionHelp);
        menuFile->addAction(actionClose);
        menuPlots->addAction(actionCustom_Analysis);
        menuPlots->addSeparator();
        menuPlots->addAction(actionPlots);
        menuPlots->addAction(actionArea_Targets);
        menuPlots->addAction(actionSuper_Targeting);
        menuPlots->addAction(actionNetwork_Design);
        menuSummary->addAction(actionReport_Options);
        menuSummary->addSeparator();
        menuSummary->addAction(actionProblem_Table);
        menuSummary->addAction(actionArea_Targets_2);
        menuSummary->addAction(actionSuper_Targeting_2);
        menuSummary->addSeparator();
        menuHelp->addAction(actionHelp_Topics);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbour_SHEN);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionUndo_2);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClean);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionElminate);
        menuEdit->addAction(actionElimnate_all);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionUndo_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionClean);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHelp);
        toolBar->addAction(actionCustom_Analysis);
        toolBar->addAction(actionPlots);
        toolBar->addAction(actionProblem_Table);
        toolBar->addSeparator();

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QCoreApplication::translate("VentanaPrincipal", "VentanaPrincipal", nullptr));
        actionNew->setText(QCoreApplication::translate("VentanaPrincipal", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("VentanaPrincipal", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("VentanaPrincipal", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("VentanaPrincipal", "Save as ...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("VentanaPrincipal", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHelp->setText(QCoreApplication::translate("VentanaPrincipal", "Help", nullptr));
        actionCustom_Analysis->setText(QCoreApplication::translate("VentanaPrincipal", "Custom Analysis", nullptr));
        actionArea_Targets->setText(QCoreApplication::translate("VentanaPrincipal", "Area Targets", nullptr));
        actionSuper_Targeting->setText(QCoreApplication::translate("VentanaPrincipal", "Super Targeting", nullptr));
        actionProblem_Table->setText(QCoreApplication::translate("VentanaPrincipal", "Problem Table", nullptr));
        actionArea_Targets_2->setText(QCoreApplication::translate("VentanaPrincipal", "Area Targets", nullptr));
        actionSuper_Targeting_2->setText(QCoreApplication::translate("VentanaPrincipal", "Super Targeting", nullptr));
        actionReport_Options->setText(QCoreApplication::translate("VentanaPrincipal", "Report Options", nullptr));
        actionNetwork_Design->setText(QCoreApplication::translate("VentanaPrincipal", "Network Design", nullptr));
        actionAbour_SHEN->setText(QCoreApplication::translate("VentanaPrincipal", "About SHEN ...", nullptr));
        actionHelp_Topics->setText(QCoreApplication::translate("VentanaPrincipal", "Help Topics", nullptr));
        actionUndo->setText(QCoreApplication::translate("VentanaPrincipal", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo_2->setText(QCoreApplication::translate("VentanaPrincipal", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo_2->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("VentanaPrincipal", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("VentanaPrincipal", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("VentanaPrincipal", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("VentanaPrincipal", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClean->setText(QCoreApplication::translate("VentanaPrincipal", "Clean", nullptr));
        actionElminate->setText(QCoreApplication::translate("VentanaPrincipal", "Elminate ", nullptr));
        actionElimnate_all->setText(QCoreApplication::translate("VentanaPrincipal", "Elimnate all", nullptr));
        actionPlots->setText(QCoreApplication::translate("VentanaPrincipal", "Plots", nullptr));
        menuFile->setTitle(QCoreApplication::translate("VentanaPrincipal", "File", nullptr));
        menuPlots->setTitle(QCoreApplication::translate("VentanaPrincipal", "Analysis", nullptr));
        menuSummary->setTitle(QCoreApplication::translate("VentanaPrincipal", "Summary", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("VentanaPrincipal", "Language", nullptr));
        menuContact->setTitle(QCoreApplication::translate("VentanaPrincipal", "Contact", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("VentanaPrincipal", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("VentanaPrincipal", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VentanaPrincipal", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("VentanaPrincipal", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
