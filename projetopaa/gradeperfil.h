#ifndef GRADEPERFIL_H
#define GRADEPERFIL_H
#include "disciplinaperfil.h"
#include<QtXml/QtXml>
#include<QDebug>
#include<vector>
#include<iostream>
#include<QtCore>
#include<algorithm>

using namespace std;

class GradePerfil
{
    vector<DisciplinaPerfil> grade;
    QDomDocument QDDDisciplinas;//Armazenará o arquivo situacao.xml
    QDomDocument QDDAprovadas;//Armazenará o arquivo com as disciplinas aprovadas
    QDomDocument QDDReprovadas;//Armazenará o arquivo com as disciplinas aprovadas

public:
    GradePerfil();
    void CarregarGradePerfil();
    void atualizaAprovadas(); //Atualiza o arquivo;
    void atualizaReprovadas(); //Atualiza o arquivo Reprovadas;
    void gerarXmlPerfil();

};

#endif // GRADEPERFIL_H
