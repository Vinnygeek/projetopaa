#include "vertice.h"

Vertice::Vertice(string Position, string color, string fontColor)
{
    this->position = position; this->color = color; this->fontColor = fontColor;
}

Vertice::Vertice(){}

void Vertice::setPosition(string novaPosicao){
    position = novaPosicao;
}

string Vertice::getPosition(){
    return position;
}

void Vertice::setColor(string novaCor){
    color = novaCor;
}

string Vertice::getColor(){
    return color;
}

void Vertice::setFontcolor(string novaFontecolor){
    fontColor = novaFontecolor;
}

string Vertice::getFontcolor(){
    return fontColor;
}

void Vertice::setCodigo(string novoCodigo){
    codigo = novoCodigo;
}
string Vertice::getCodigo(){
    return codigo;
}

void Vertice::setInfo(){
    stringstream ss;
    string s;
    ss << this->codigo<<" [fillcolor=\""<<color<<" \""<<"fontcolor="<<"\""<<fontColor<<"\""<<"pos=\""<<position<<"\"]\n";
    s = ss.str();
    cout<<s<<endl;
    info = s;
}

string Vertice::getInfo(){
    setInfo();
    return info;
}
