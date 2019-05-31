#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include<iostream>
#include<vector>
#include<string>
    using namespace std;
class Disciplina
{
    string nome;
    string codigo;
    int semestre;
    string situacao;
    double carga;
    double repindex;
    double pontuacao;
    vector<string> dependencias;
public:    
    Disciplina(string Nome, string Codigo,int Semestre, string Situacao, double Carga,double Repindex);
    string getNome();
    string getCodigo();
    int getSemestre();
    string getSituacao();
    double getCarga();
    double getRepIndex();
    double getPontuacao();
    vector<string> getDependencias();

    void addDependencias( string novadependencia);

    /*//Precisa ser testada
    void removeDependencias(string velhadependencia){
        for(unsigned long i = 0; i<dependencias.size();i++){
            vector<string>::iterator it = dependencias.begin() + i;
            if(this->dependencias[i] == velhadependencia)
                this->dependencias.erase(it);
        }
    }*/

    void setNome(string Nome);
    void setCodigo(string Codigo);
    void setSemestre(int NewSemestre);
    void setSituacao(string Situacao);
    void setCarga(double Carga);
    void setRepIndex(double Repindex);
    void setPontuacao(double Pontuacao);

};

#endif // DISCIPLINA_H
