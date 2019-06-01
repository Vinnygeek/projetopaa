#ifndef GRADE_H
#define GRADE_H
#include "disciplina.h"
#include<QtXml/QtXml>
#include<QDebug>
#include<vector>
#include<iostream>
#include<QtCore>
#include<algorithm>
using namespace std;

class Grade
{
    vector<Disciplina> grade;
    QDomDocument QDDDisciplinas;//Armazenará o arquivo disciplinas.xml
    QDomDocument QDDDependencias;//Armazenará o arquivo dependencias.xml
    QDomDocument QDDAprovadas;//Armazenará o arquivo com as disciplinas aprovadas
    QDomDocument QDDReprovadas;//Armazenará o arquivo com as disciplinas aprovadas
    QFile *disciplinaXML;
    QFile *prerequisitosXML;
    QFile *aprovadasXML;
    QFile *reprovadasXML;

public:
    Grade();
    void atualizaPrerequisitos();
    void atualizaAprovadas();
    void atualizaReprovadas();

};

#endif // GRADE_H
