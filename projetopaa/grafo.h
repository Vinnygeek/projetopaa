#ifndef GRAFO_H
#define GRAFO_H
#include<vector>
#include <iostream>
#include <string>
#include "vertice.h"
#include "aresta.h"
using namespace std;
class Grafo
{
    vector<Aresta> arestas;
    vector<Vertice> vertices;
    string comeco;
    string fim;
    void setComeco();
    void setFim();

public:
    Grafo();
    void addAresta(Aresta novaAresta);
    void addVertice(Vertice novoVertice);
    void gerarGraphvizCoord();
    void gerarGraphvizDiscente();
    string legendaDiscente();
    string legendaCoord();
    string getComeco();
    string getFim();
    void openPNG();
};

#endif // GRAFO_H
