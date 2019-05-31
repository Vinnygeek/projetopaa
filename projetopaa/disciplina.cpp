#include "disciplina.h"

Disciplina::Disciplina(string Nome, string Codigo,int Semestre, string Situacao, double Carga,double Repindex):
nome(Nome),codigo(Codigo),semestre(Semestre),situacao(Situacao),carga(Carga),repindex(Repindex){}

string Disciplina::getNome(){return this->nome;}
string Disciplina::getCodigo(){return this->codigo;}
int Disciplina::getSemestre(){return this->semestre;}
string Disciplina::getSituacao(){return this->situacao;}
double Disciplina::getCarga(){return this->carga;}
double Disciplina::getRepIndex(){return this->repindex;}
double Disciplina::getPontuacao(){return this->pontuacao;}
vector<string> Disciplina::getDependencias(){return this->dependencias;}

void Disciplina::addDependencias( string novadependencia){
        this->dependencias.push_back(novadependencia);
}

/*//Precisa ser testada
void removeDependencias(string velhadependencia){
    for(unsigned long i = 0; i<dependencias.size();i++){
        vector<string>::iterator it = dependencias.begin() + i;
        if(this->dependencias[i] == velhadependencia)
            this->dependencias.erase(it);
    }
}*/

void Disciplina::setNome(string Nome){this->nome = Nome;}
void Disciplina::setCodigo(string Codigo){this->codigo = Codigo;}
void Disciplina::setSemestre(int NewSemestre){this->semestre = NewSemestre;}
void Disciplina::setSituacao(string Situacao){this->situacao = Situacao;}
void Disciplina::setCarga(double Carga){this->carga = Carga;}
void Disciplina::setRepIndex(double Repindex){this->repindex = Repindex;}
void Disciplina::setPontuacao(double Pontuacao){this->pontuacao = Pontuacao;}
