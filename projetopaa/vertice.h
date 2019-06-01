#ifndef VERTICE_H
#define VERTICE_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Vertice
{
    string position;
    string color;
    string fontColor;
    string codigo;
    string info;

public:
    Vertice(string position, string color, string fontColor);
    Vertice();
    void setPosition(string novaPosicao);
    string getPosition();

    void setColor(string novaCor);
    string getColor();

    void setFontcolor(string novaFontecolor);
    string getFontcolor();

    void setCodigo(string novoCodigo);
    string getCodigo();

    void setInfo();

    string getInfo();
};

#endif // VERTICE_H
