/********************************************************************************
** Form generated from reading UI file 'unidadesentrada.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNIDADESENTRADA_H
#define UI_UNIDADESENTRADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnidadesEntrada
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *ImagenPrograma;
    QFrame *line_2;

    void setupUi(QDialog *UnidadesEntrada)
    {
        if (UnidadesEntrada->objectName().isEmpty())
            UnidadesEntrada->setObjectName("UnidadesEntrada");
        UnidadesEntrada->resize(339, 133);
        gridLayout = new QGridLayout(UnidadesEntrada);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(UnidadesEntrada);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::FieldRole, label);


        gridLayout->addLayout(formLayout, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        ImagenPrograma = new QLabel(UnidadesEntrada);
        ImagenPrograma->setObjectName("ImagenPrograma");

        verticalLayout->addWidget(ImagenPrograma);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        line_2 = new QFrame(UnidadesEntrada);
        line_2->setObjectName("line_2");
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 1, 2, 1);


        retranslateUi(UnidadesEntrada);

        QMetaObject::connectSlotsByName(UnidadesEntrada);
    } // setupUi

    void retranslateUi(QDialog *UnidadesEntrada)
    {
        UnidadesEntrada->setWindowTitle(QCoreApplication::translate("UnidadesEntrada", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UnidadesEntrada", "<html><head/><body><p align=\"justify\">Welcome to SHEN, a program that will help you to design </p><p align=\"justify\">networks of heat exchangers with great facility,to generate </p><p align=\"justify\">different types of graphs using different methods of analysis.</p></body></html>", nullptr));
        ImagenPrograma->setText(QCoreApplication::translate("UnidadesEntrada", "<html><head/><body><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnidadesEntrada: public Ui_UnidadesEntrada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNIDADESENTRADA_H
