#ifndef DISCIPLINAPERFIL_H
#define DISCIPLINAPERFIL_H
#include<iostream>
#include<string>
    using namespace std;

/**
* @brief Esta classe servirá para criar objetos das disciplinas de forma a criar os perfis dos estudantes as situações do curso
* para o coordenador
* @param codigo Esta atributo armazena o código da disciplina. Ex: ECOI33.1.
* @param aprovadas Armazena a quantidade de alunos que aprovaram nesta disciplina.
* @param reprovadas Armazena a quantidade de alunos que reprovaram nesta disciplina.
* @param posicao Armazena a posição do nó da disciplina no grafo.
**/
class DisciplinaPerfil
{
    string codigo;
    int aprovadas; //numero de vezes que a disciplina obteve aprovação
    int reprovadas; //numero de vezes que a disciplina obteve reprovação
    string posicao;
public:
    /**
      @brief Construtor.
    **/
    DisciplinaPerfil(string Codigo, int Aprovadas,int Reprovadas, string Posicao);

    /**
      @brief Retorna o atributo codigo.
    **/
    string getCodigo();

    /**
      @brief Retorna o atributo aprovadas.
    **/
    int getNumAprovadas();

    /**
      @brief Retorna o atributo reprovadas.
    **/
    int getNumReprovadas();

    /**
      @brief Retorna o atributo posicao.
    **/
    string getPosicao();

    /**
      @brief Configura o atributo codigo.
    **/
    void setCodigo(string Codigo);

    /**
      @brief Configura o atributo aprovadas.
    **/
    void setAprovadas(int novaAprovadas);

    /**
      @brief incrementa o atributo aprovadas.
    **/
    void incAprovadas(); //Incrementa as aprovadas

    /**
      @brief Configura o atributo reprovadas.
    **/
    void setReprovadas(int novaReprovadas);

    /**
      @brief Incrementa o atributo reprovadas.
    **/
    void incReprovadas(); //Incrementa as reprovadas

    /**
      @brief Configura o atributo posicao.
    **/
    void setPosicao(string novaPosicao);
};

#endif // DISCIPLINAPERFIL_H
