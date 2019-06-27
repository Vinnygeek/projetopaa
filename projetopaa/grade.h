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

/**
 * @brief Esta classe servirá como Engine(máquina) para criar as grades curriculares dos discentes e do coordenador
 * de acordo com a configuração desejada.
 * @param grade Este atributo armazenará todas as disciplinas que compõem a grade curricular do curso.
 * @param QDDDisciplinas Armazenará os dados do arquivo disciplinas.xml, presente na pasta do projeto.
 * @param QDDDependencias Armazenará os dados do arquivo dependencias.xml, presente na pasta do projeto.
 * @param QDDAprovadas Armazenará os dados do arquivo com as disciplinas aprovadas, presente na pasta do projeto.
 * @param QDDReprovadas Armazenará os dados do arquivo com as disciplinas reprovadas, presente na pasta do projeto.
 */
class Grade
{
    vector<Disciplina> grade;
    QDomDocument QDDDisciplinas;//Armazenará o arquivo disciplinas.xml
    QDomDocument QDDDependencias;//Armazenará o arquivo dependencias.xml
    QDomDocument QDDAprovadas;//Armazenará o arquivo com as disciplinas aprovadas
    QDomDocument QDDReprovadas;//Armazenará o arquivo com as disciplinas aprovadas

public:
    /**
      @brief Método Construtor sem parâmetros.
    **/
    Grade();

    /**
      @brief Retorna o vetor com todas as disciplinas.
    **/
    vector<Disciplina> getGrade();

    /**
      @brief Este método carrega todas as disciplinas do arquivo disciplinas.xml, localizada na pasta do projeto,
      e as armazena no vetor grade.
    **/
    void CarregarGradeDiscente();

    /**
      @brief Este método atualiza todos os pre-requisitos de todas as disciplinas do vetor grade
      a partir do arquivo dependencias.xml, localizada na pasta do projeto.
    **/
    void atualizaPrerequisitos();

    /**
      @brief Este método atualiza todos as disciplinas aprovadas do vetor grade
      a partir do arquivo aprovadas.xml, gerado pelo discente no programa e localizado na pasta do projeto.
    **/
    void atualizaAprovadas();

    /**
      @brief Este método atualiza todos as disciplinas reprovadas do vetor grade
      a partir do arquivo reprovadas.xml, gerado pelo discente no programa e localizado na pasta do projeto.
    **/
    void atualizaReprovadas();

    /**
      @brief Este método utiliza todas as disciplinas e informações coletadas dos
      métodos anteriores e cria o arquivo gradeAluno.xml, na pasta do projeto.
    **/
    void gerarXmlDiscente();

    /**
      @brief Este método utiliza todas as disciplinas e informações coletadas dos
      métodos anteriores e cria o arquivo gradeCoord.xml, na pasta do projeto.
    **/
    void gerarXmlCoordenador();
};

#endif // GRADE_H
