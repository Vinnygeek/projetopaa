#ifndef GRAFO_H
#define GRAFO_H
#include<vector>
#include <iostream>
#include <string>
#include "vertice.h"
using namespace std;
class Grafo
{
    vector<string> arestas;
    vector<Vertice> vertices;
    string comeco;
    string fim;
    string edgeStyle;
    void setComeco();
    void setFim();

public:
    Grafo();
    void addAresta(string novaAresta);
    void addVertice(Vertice novoVertice);
    void setEdgeStyle(string color);
    string getEdgeStyle();
    void gerarGraphvizCoord();
    void gerarGraphvizDiscente();
    string getComeco();
    string getFim();
    void openPNG();
};

#endif // GRAFO_H
