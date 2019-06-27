#ifndef ARESTA_H
#define ARESTA_H
#include<string>
#include<sstream>
using namespace std;

/**
 * @brief Esta classe servirá como estrutura de dados para as arestas(pre-requisitos) do grafo. Seus parâmetros retornam informações que serão
 * processadas pelo programa Graphviz.
 * @param info Neste atributo será armazenado a informação da aresta, no formato aceito pelo
 * programa Graphviz, para a geração do grafo da grade curricular.
 * @param cor Neste atributo será armazenada a cor da aresta, no formato aceito pelo programa Graphviz.
 *
 */
class Aresta
{
    string info;
    string cor;
public:

    /**
      @brief Construtor sem parâmetros.
    **/
    Aresta();

    /**
      @brief Configura o atributo info.
    **/
    void setInfo(string novaString);

    /**
      @brief Retorna o atributo info.
    **/
    string getInfo();

    /**
      @brief Configura o atributo cor.
    **/
    void setCor(string novaCor);

    /**
      @brief Retorna o atributo cor.
    **/
    string getCor();
    
};

#endif // ARESTA_H
