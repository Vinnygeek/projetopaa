/********************************************************************************
** Form generated from reading UI file 'telacoordenador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACOORDENADOR_H
#define UI_TELACOORDENADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaCoordenador
{
public:
    QPushButton *pushButton_gerarXml;
    QPushButton *pushButton_indiceDeReprovacoes;
    QPushButton *pushButton_situacaoDosDiscentes;

    void setupUi(QDialog *TelaCoordenador)
    {
        if (TelaCoordenador->objectName().isEmpty())
            TelaCoordenador->setObjectName(QStringLiteral("TelaCoordenador"));
        TelaCoordenador->resize(400, 300);
        pushButton_gerarXml = new QPushButton(TelaCoordenador);
        pushButton_gerarXml->setObjectName(QStringLiteral("pushButton_gerarXml"));
        pushButton_gerarXml->setGeometry(QRect(60, 70, 281, 41));
        pushButton_indiceDeReprovacoes = new QPushButton(TelaCoordenador);
        pushButton_indiceDeReprovacoes->setObjectName(QStringLiteral("pushButton_indiceDeReprovacoes"));
        pushButton_indiceDeReprovacoes->setGeometry(QRect(60, 130, 281, 41));
        pushButton_situacaoDosDiscentes = new QPushButton(TelaCoordenador);
        pushButton_situacaoDosDiscentes->setObjectName(QStringLiteral("pushButton_situacaoDosDiscentes"));
        pushButton_situacaoDosDiscentes->setGeometry(QRect(60, 190, 281, 41));

        retranslateUi(TelaCoordenador);

        QMetaObject::connectSlotsByName(TelaCoordenador);
    } // setupUi

    void retranslateUi(QDialog *TelaCoordenador)
    {
        TelaCoordenador->setWindowTitle(QApplication::translate("TelaCoordenador", "Dialog", Q_NULLPTR));
        pushButton_gerarXml->setText(QApplication::translate("TelaCoordenador", "Gerar XML", Q_NULLPTR));
        pushButton_indiceDeReprovacoes->setText(QApplication::translate("TelaCoordenador", "\303\215ndice de Reprova\303\247\303\265es", Q_NULLPTR));
        pushButton_situacaoDosDiscentes->setText(QApplication::translate("TelaCoordenador", "Situa\303\247\303\243o dos Discentes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaCoordenador: public Ui_TelaCoordenador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACOORDENADOR_H
