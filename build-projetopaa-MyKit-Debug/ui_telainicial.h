/********************************************************************************
** Form generated from reading UI file 'telainicial.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIAL_H
#define UI_TELAINICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicial
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Aluno;
    QPushButton *pushButton_Coordenador;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaInicial)
    {
        if (TelaInicial->objectName().isEmpty())
            TelaInicial->setObjectName(QStringLiteral("TelaInicial"));
        TelaInicial->resize(400, 300);
        centralWidget = new QWidget(TelaInicial);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Aluno = new QPushButton(centralWidget);
        pushButton_Aluno->setObjectName(QStringLiteral("pushButton_Aluno"));
        pushButton_Aluno->setGeometry(QRect(160, 60, 89, 25));
        pushButton_Coordenador = new QPushButton(centralWidget);
        pushButton_Coordenador->setObjectName(QStringLiteral("pushButton_Coordenador"));
        pushButton_Coordenador->setGeometry(QRect(160, 100, 89, 25));
        TelaInicial->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TelaInicial);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        TelaInicial->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TelaInicial);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TelaInicial->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TelaInicial);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaInicial->setStatusBar(statusBar);

        retranslateUi(TelaInicial);

        QMetaObject::connectSlotsByName(TelaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *TelaInicial)
    {
        TelaInicial->setWindowTitle(QApplication::translate("TelaInicial", "TelaInicial", Q_NULLPTR));
        pushButton_Aluno->setText(QApplication::translate("TelaInicial", "Aluno", Q_NULLPTR));
        pushButton_Coordenador->setText(QApplication::translate("TelaInicial", "Coordenador", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaInicial: public Ui_TelaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIAL_H
