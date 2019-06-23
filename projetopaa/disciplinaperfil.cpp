#include "disciplinaperfil.h"

DisciplinaPerfil::DisciplinaPerfil(string Codigo, int Aprovadas,int Reprovadas):
codigo(Codigo), aprovadas(Aprovadas), reprovadas(Reprovadas){}

string DisciplinaPerfil::getCodigo(){return this->codigo;}
int DisciplinaPerfil::getNumAprovadas(){return this->aprovadas;}
int DisciplinaPerfil::getNumReprovadas(){return this->reprovadas;}

void DisciplinaPerfil::setCodigo(string Codigo){this->codigo = Codigo;}
void DisciplinaPerfil::setAprovadas(int novaAprovadas){this->aprovadas = novaAprovadas;}
void DisciplinaPerfil::setReprovadas(int novaReprovadas){this->reprovadas = novaReprovadas;}
void DisciplinaPerfil::incAprovadas(){aprovadas++;} //Incrementa as aprovadas
void DisciplinaPerfil::incReprovadas(){reprovadas++;} //Incrementa as reprovadas
