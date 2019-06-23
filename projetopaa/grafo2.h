#ifndef GRAFO2_H
#define GRAFO2_H
#include <iostream>
#include <list>
#include "disciplina.h"
#include "grafo.h"
#include<sstream>

using namespace std;


class Grafo2
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[], Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha);
public:
    Grafo2(int V);
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha);    // prints DFS traversal of the complete graph
};

#endif // GRAFO2_H
