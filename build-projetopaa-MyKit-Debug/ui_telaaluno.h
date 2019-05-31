/********************************************************************************
** Form generated from reading UI file 'telaaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALUNO_H
#define UI_TELAALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaAluno
{
public:
    QPushButton *pushButton_addAprovadas;
    QPushButton *pushButton_addReprovadas;
    QPushButton *pushButton_gerarPerfil;
    QPushButton *pushButton_addReprovadas_gerarHistorico;
    QPushButton *pushButton_addReprovadas_2;

    void setupUi(QDialog *TelaAluno)
    {
        if (TelaAluno->objectName().isEmpty())
            TelaAluno->setObjectName(QStringLiteral("TelaAluno"));
        TelaAluno->resize(400, 300);
        pushButton_addAprovadas = new QPushButton(TelaAluno);
        pushButton_addAprovadas->setObjectName(QStringLiteral("pushButton_addAprovadas"));
        pushButton_addAprovadas->setGeometry(QRect(60, 10, 281, 41));
        pushButton_addReprovadas = new QPushButton(TelaAluno);
        pushButton_addReprovadas->setObjectName(QStringLiteral("pushButton_addReprovadas"));
        pushButton_addReprovadas->setGeometry(QRect(60, 60, 281, 41));
        pushButton_gerarPerfil = new QPushButton(TelaAluno);
        pushButton_gerarPerfil->setObjectName(QStringLiteral("pushButton_gerarPerfil"));
        pushButton_gerarPerfil->setGeometry(QRect(60, 210, 281, 41));
        pushButton_addReprovadas_gerarHistorico = new QPushButton(TelaAluno);
        pushButton_addReprovadas_gerarHistorico->setObjectName(QStringLiteral("pushButton_addReprovadas_gerarHistorico"));
        pushButton_addReprovadas_gerarHistorico->setGeometry(QRect(60, 160, 281, 41));
        pushButton_addReprovadas_2 = new QPushButton(TelaAluno);
        pushButton_addReprovadas_2->setObjectName(QStringLiteral("pushButton_addReprovadas_2"));
        pushButton_addReprovadas_2->setGeometry(QRect(60, 110, 281, 41));

        retranslateUi(TelaAluno);

        QMetaObject::connectSlotsByName(TelaAluno);
    } // setupUi

    void retranslateUi(QDialog *TelaAluno)
    {
        TelaAluno->setWindowTitle(QApplication::translate("TelaAluno", "Dialog", Q_NULLPTR));
        pushButton_addAprovadas->setText(QApplication::translate("TelaAluno", "Adicionar Disciplinas Aprovadas", Q_NULLPTR));
        pushButton_addReprovadas->setText(QApplication::translate("TelaAluno", "Adicionar Disciplinas Reprovadas", Q_NULLPTR));
        pushButton_gerarPerfil->setText(QApplication::translate("TelaAluno", "Gerar Perfil", Q_NULLPTR));
        pushButton_addReprovadas_gerarHistorico->setText(QApplication::translate("TelaAluno", "Gerar Hist\303\263rico", Q_NULLPTR));
        pushButton_addReprovadas_2->setText(QApplication::translate("TelaAluno", "Gerar Grade XML", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaAluno: public Ui_TelaAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALUNO_H
