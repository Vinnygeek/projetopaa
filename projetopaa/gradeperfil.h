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

/**
 * @brief Esta classe servirá como Engine(máquina) para criar as grades curriculares dos perfis dos discentes e do coordenador
 * de acordo com a configuração desejada.
 * @param grade Este atributo armazenará todas as disciplinas que compõem a grade curricular do curso.
 * @param QDDDisciplinas Armazenará os dados do arquivo disciplinas.xml, presente na pasta do projeto.
 * @param QDDAprovadas Armazenará os dados do arquivo dependencias.xml, presente na pasta do projeto com a qtd de alunos aprovados em cada disciplina.
 * @param QDDReprovadas Armazenará os dados do arquivo com as disciplinas aprovadas, presente na pasta do projeto com a qtd de alunos reprovados em cada disciplina.
 */
class GradePerfil
{
    vector<DisciplinaPerfil> grade;
    QDomDocument QDDDisciplinas;//Armazenará o arquivo situacao.xml
    QDomDocument QDDAprovadas;//Armazenará o arquivo com as disciplinas aprovadas
    QDomDocument QDDReprovadas;//Armazenará o arquivo com as disciplinas aprovadas

public:
    GradePerfil();
    /**
      @brief Este método retorna a grade gerada.
    **/
    vector<DisciplinaPerfil> getGrade();

    /**
      @brief Este Carrega as informações da grade do arquivo situacao.xml, onde contém todas as aprovações e reprovações de cada
      disciplina.
    **/
    void CarregarGradePerfil();

    /**
      @brief Este método atualiza todos as disciplinas aprovadas do vetor grade
      a partir do arquivo aprovadas.xml, gerado pelo discente no programa e localizado na pasta do projeto,
    **/
    void atualizaAprovadas(); //Atualiza o arquivo;

    /**
      @brief Este método atualiza todos as disciplinas reprovadas do vetor grade
      a partir do arquivo reprovadas.xml, gerado pelo discente no programa e localizado na pasta do projeto,
    **/
    void atualizaReprovadas(); //Atualiza o arquivo Reprovadas;
    /**
      @brief Este método utiliza todas as disciplinas e informações coletadas dos
      métodos anteriores e recria o arquivo situacao.xml; atualizando a situação das disciplinas.
    **/
    void gerarXmlPerfil();

};

#endif // GRADEPERFIL_H
