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

    //QFile disciplinaXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/disciplinas.xml");
    //QFile prerequisitosXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/dependencias.xml");
    //QFile aprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
    //QFile reprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/reprovadas.xml");

public:
    Grade();
    vector<Disciplina> getGrade();
    void CarregarGradeDiscente();
    void atualizaPrerequisitos();
    void atualizaAprovadas();
    void atualizaReprovadas();
    void gerarXmlDiscente();
    void gerarXmlCoordenador();


};

#endif // GRADE_H
