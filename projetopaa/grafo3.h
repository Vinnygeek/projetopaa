#ifndef GRAFO3_H
#define GRAFO3_H
#include <iostream>
#include <list>
#include "disciplinaperfil.h"
#include "grafo.h"
#include<sstream>
#include "vertice.h"

using namespace std;


class Grafo3
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[], Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha);
public:
    Grafo3(int V);
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha);    // prints DFS traversal of the complete graph
};

#endif // GRAFO3_H
