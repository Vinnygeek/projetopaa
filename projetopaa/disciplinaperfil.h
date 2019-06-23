#ifndef DISCIPLINAPERFIL_H
#define DISCIPLINAPERFIL_H
#include<iostream>
#include<string>
    using namespace std;

class DisciplinaPerfil
{
    string codigo;
    int aprovadas; //numero de vezes que a disciplina obteve aprovação
    int reprovadas; //numero de vezes que a disciplina obteve reprovação
    string posicao;
public:
    DisciplinaPerfil(string Codigo, int Aprovadas,int Reprovadas, string Posicao);

    string getCodigo();

    int getNumAprovadas();

    int getNumReprovadas();

    string getPosicao();

    void setCodigo(string Codigo);

    void setAprovadas(int novaAprovadas);

    void incAprovadas(); //Incrementa as aprovadas

    void setReprovadas(int novaReprovadas);

    void incReprovadas(); //Incrementa as reprovadas

    void setPosicao(string novaPosicao);
};

#endif // DISCIPLINAPERFIL_H
