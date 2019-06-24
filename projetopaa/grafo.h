#ifndef GRAFO_H
#define GRAFO_H
#include<vector>
#include <iostream>
#include <string>
#include "vertice.h"
#include "aresta.h"
using namespace std;

/**
 * @brief Esta classe servirá como estrutura de dados e Engine(máquina)para representar e gerar o grafo pelo programa Araphviz.
 * @param arestas Este atributo armazenará todas as arestas(Prerequisitos) do grafo.
 * @param vertices Este atributo armazenará todos os vértices(Disciplinas) do grafo.
 * @param comeco Este atributo armaze a string de inicializacao do arquivo .dot de onde será chamado a função para gerar o grafo.
 * @param fim Este atributo armaze a string de finalizacao do arquivo .dot de onde será chamado a função para gerar o grafo.
 */
class Grafo
{
    vector<Aresta> arestas;
    vector<Vertice> vertices;
    string comeco;
    string fim;
    void setComeco();
    void setLegendaPerfil();
    void setFim();
public:
    /**
      @brief Construtor sem parâmetros.
    **/
    Grafo();

    /**
      @brief Adiciona nova aresta(Pre-requisito) ao grafo.
    **/
    void addAresta(Aresta novaAresta);

    /**
      @brief Retorna o Vetor com os vértices.
    **/
    vector<Vertice> getVertices();
    /**

      @brief Adiciona novo vértice(Disciplina) ao grafo.
    **/
    void addVertice(Vertice novoVertice);

    /**
      @brief Gera o arquivo grafoCoord.dot, contrói a imagem pelo programa Graphviz e exibe o grafo.
    **/
    void gerarGraphvizCoord();

    /**
      @brief Gera o arquivo grafoPerfilD.dot, contrói a imagem pelo programa Graphviz e exibe o grafo.
    **/
    void gerarGraphvizDiscente();

    /**
     * @brief Gera o arquivo grafoPerfilC.dot, constrói a imagem pelo programa Graphviz e exibe o grafo.
     */
    void gerarGraphvizPerfilDiscente();

    /**
     * @brief Gera o arquivo grafoPerfilDiscente.dot, constrói a imagem pelo programa Graphviz e exibe o grafo.
     */
    void gerarGraphvizPerfilCoordenador();

    /**
      @brief Gera uma string para exibir a legenda para o grafo do discente.
    **/
    string legendaDiscente();

    /**
      @brief Gera uma string para exibir a legenda para o grafo do coordenador.
    **/
    string legendaCoord();

    /**
      @brief Retorna a string de começo do arquivo .dot para criação do grafo.
    **/
    string getComeco();

    /**
      @brief Retorna a string de fim do arquivo .dot para criação do grafo.
    **/
    string getFim();
};

#endif // GRAFO_H
