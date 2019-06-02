#ifndef ARESTA_H
#define ARESTA_H
#include<string>
#include<sstream>
using namespace std;

/**
 * @brief Esta classe servirá como estrutura de dados para as arestas(pre-requisitos) do grafo. Seus parâmetros retornam informações que serão
 * processados pelo programa Graphviz.
 * @param info Neste parâmetro será armazenado a informação da aresta, no formato aceito pelo
 * programa Graphviz, para a geração do grafo da grade curricular.
 * @param cor Neste parâmetro será armazenada a cor da aresta, no formato aceito pelo programa Graphviz.
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
      @brief Configura a atributo info.
    **/
    void setInfo(string novaString);

    /**
      @brief Retorna a atributo info.
    **/
    string getInfo();

    /**
      @brief Configura a atributo cor.
    **/
    void setCor(string novaCor);

    /**
      @brief Retorna a atributo cor.
    **/
    string getCor();
    
};

#endif // ARESTA_H
