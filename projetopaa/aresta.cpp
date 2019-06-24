#include "aresta.h"
Aresta::Aresta()
{

}

void Aresta::setInfo(string novaString){
    info = novaString;
}

string Aresta::getInfo(){return info;}

void Aresta::setCor(string novaCor){
    stringstream ss;
    string s;
    ss <<" edge [style=\"\", weight=10,color="<<novaCor<<", len=.4]\n";
    s = ss.str();
    cor = s;
}

string Aresta::getCor(){return cor;}
