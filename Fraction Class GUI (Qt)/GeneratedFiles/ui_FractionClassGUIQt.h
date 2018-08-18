/********************************************************************************
** Form generated from reading UI file 'FractionClassGUIQt.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRACTIONCLASSGUIQT_H
#define UI_FRACTIONCLASSGUIQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FractionClassGUIQtClass
{
public:
    QWidget *centralWidget;
    QPushButton *calculate;
    QSpinBox *frac2nume;
    QLabel *label_6;
    QSpinBox *frac2denom;
    QLabel *label_3;
    QSpinBox *frac1nume;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *frac1denom;
    QComboBox *op;
    QLabel *label;
    QPlainTextEdit *result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FractionClassGUIQtClass)
    {
        if (FractionClassGUIQtClass->objectName().isEmpty())
            FractionClassGUIQtClass->setObjectName(QStringLiteral("FractionClassGUIQtClass"));
        FractionClassGUIQtClass->resize(211, 246);
        centralWidget = new QWidget(FractionClassGUIQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QStringLiteral("calculate"));
        calculate->setGeometry(QRect(70, 168, 75, 23));
        frac2nume = new QSpinBox(centralWidget);
        frac2nume->setObjectName(QStringLiteral("frac2nume"));
        frac2nume->setGeometry(QRect(26, 78, 42, 22));
        frac2nume->setMinimum(-32768);
        frac2nume->setMaximum(32767);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(136, 120, 47, 13));
        frac2denom = new QSpinBox(centralWidget);
        frac2denom->setObjectName(QStringLiteral("frac2denom"));
        frac2denom->setGeometry(QRect(76, 78, 42, 22));
        frac2denom->setMinimum(-32768);
        frac2denom->setMaximum(32767);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 20, 10, 16));
        frac1nume = new QSpinBox(centralWidget);
        frac1nume->setObjectName(QStringLiteral("frac1nume"));
        frac1nume->setGeometry(QRect(26, 18, 42, 22));
        frac1nume->setAccelerated(false);
        frac1nume->setMinimum(-32768);
        frac1nume->setMaximum(32767);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(136, 82, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 80, 10, 16));
        frac1denom = new QSpinBox(centralWidget);
        frac1denom->setObjectName(QStringLiteral("frac1denom"));
        frac1denom->setGeometry(QRect(76, 18, 42, 22));
        frac1denom->setMinimum(-32768);
        frac1denom->setMaximum(32767);
        op = new QComboBox(centralWidget);
        op->addItem(QString());
        op->addItem(QString());
        op->addItem(QString());
        op->addItem(QString());
        op->setObjectName(QStringLiteral("op"));
        op->setGeometry(QRect(56, 48, 31, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(136, 22, 47, 13));
        result = new QPlainTextEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(20, 112, 104, 31));
        result->setUndoRedoEnabled(false);
        result->setReadOnly(true);
        result->setOverwriteMode(false);
        FractionClassGUIQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FractionClassGUIQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 211, 21));
        FractionClassGUIQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FractionClassGUIQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FractionClassGUIQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FractionClassGUIQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FractionClassGUIQtClass->setStatusBar(statusBar);

        retranslateUi(FractionClassGUIQtClass);

        QMetaObject::connectSlotsByName(FractionClassGUIQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *FractionClassGUIQtClass)
    {
        FractionClassGUIQtClass->setWindowTitle(QApplication::translate("FractionClassGUIQtClass", "FractionClassGUIQt", nullptr));
        calculate->setText(QApplication::translate("FractionClassGUIQtClass", "Calculate", nullptr));
        label_6->setText(QApplication::translate("FractionClassGUIQtClass", "Result", nullptr));
        label_3->setText(QApplication::translate("FractionClassGUIQtClass", "/", nullptr));
        label_2->setText(QApplication::translate("FractionClassGUIQtClass", "Frac2", nullptr));
        label_4->setText(QApplication::translate("FractionClassGUIQtClass", "/", nullptr));
        op->setItemText(0, QApplication::translate("FractionClassGUIQtClass", "+", nullptr));
        op->setItemText(1, QApplication::translate("FractionClassGUIQtClass", "-", nullptr));
        op->setItemText(2, QApplication::translate("FractionClassGUIQtClass", "*", nullptr));
        op->setItemText(3, QApplication::translate("FractionClassGUIQtClass", "/", nullptr));

        label->setText(QApplication::translate("FractionClassGUIQtClass", "Frac1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FractionClassGUIQtClass: public Ui_FractionClassGUIQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRACTIONCLASSGUIQT_H
