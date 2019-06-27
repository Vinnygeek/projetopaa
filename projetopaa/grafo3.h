#ifndef GRAFO3_H
#define GRAFO3_H
#include <iostream>
#include <list>
#include "disciplinaperfil.h"
#include "grafo.h"
#include<sstream>
#include "vertice.h"

using namespace std;

/**
 * @brief Esta classe foi adaptada de (https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/) e servirá como estrutura de dados e Engine(máquina)para representar e gerar um grafo que vai fazer a busca em profundidade(DFS)
 * para gerar o perfil do curso na visão do coordenador.
 * @param V Número de vértices
 * @param adj Ponteiro para um arranjo contendo a lista de adjacências.
 */
class Grafo3
{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[], Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha);
public:
    /**
      @brief Construtor, recebe a qtd de vértices.
    **/
    Grafo3(int V);

    /**
      @brief Adiciona nova aresta(Competências) ao grafo.
    **/
    void addEdge(int v, int w);

    /**
      @brief Faz a busca em profundidade em todo o grafo, atualizando cada disciplina com sua respectiva competência e
      indicando se o componente possui maior índice de reprovação ou aprovação.
    **/
    void DFS(Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha);
};

#endif // GRAFO3_H
