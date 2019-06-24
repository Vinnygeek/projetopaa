#ifndef GRAFO2_H
#define GRAFO2_H
#include <iostream>
#include <list>
#include "disciplina.h"
#include "grafo.h"
#include<sstream>

using namespace std;

/**
 * @brief Esta classe foi adaptada de (https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/) e servirá como estrutura de dados e Engine(máquina)para representar e gerar um grafo que vai fazer a busca em profundidade(DFS)
 * para gerar o perfil do discente.
 * @param V Número de vértices
 * @param adj Ponteiro para um arranjo contendo a lista de adjacências.
 */
class Grafo2
{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[], Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha);
public:
    /**
      @brief Construtor, recebe a qtd de vértices.
    **/
    Grafo2(int V);

    /**
      @brief Adiciona nova aresta(Competências) ao grafo.
    **/
    void addEdge(int v, int w);

    /**
      @brief Faz a busca em profundidade em todo o grafo, atualizando cada disciplina com sua respectiva competência.
    **/
    void DFS(Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha);
};

#endif // GRAFO2_H
