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
public:
    DisciplinaPerfil(string Codigo, int Aprovadas,int Reprovadas);

    string getCodigo();

    int getNumAprovadas();

    int getNumReprovadas();

    void setCodigo(string Codigo);

    void setAprovadas(int novaAprovadas);

    void incAprovadas(); //Incrementa as aprovadas

    void setReprovadas(int novaReprovadas);

    void incReprovadas(); //Incrementa as reprovadas

};

#endif // DISCIPLINAPERFIL_H
