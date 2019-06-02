#ifndef VERTICE_H
#define VERTICE_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

/**
 * @brief Esta classe servirá como estrutura de dados para os veértices(Disciplinas) do grafo. Seus atributos retornam informações que serão
 * processados pelo programa Graphviz.
 * @param info Neste atributo será armazenado a informação do vértice, no formato aceito pelo
 * programa Graphviz, para a geração do grafo da grade curricular.
 * @param color Neste atributo será armazenada a cor do vértice, no formato aceito pelo programa Graphviz.
 * @param position Este atributo indica a posição do vértice no plano do grafo.
 * @param codigo Este atributo guarda o código da disciplina.
 * @param fontColor Este atributo guarda a cor da fonte do vértice.
 */
class Vertice
{
    string position;
    string color;
    string fontColor;
    string codigo;
    string info;

public:
    /**
      @brief Método Construtor da classe.
      @param position Parâmetro atribuído ao atributo position do objeto.
      @param color Parâmetro atribuído ao atributo color do objeto.
      @param fontColor Parâmetro atribuído ao atributo fontColor do objeto.
    **/
    Vertice(string position, string color, string fontColor);

    /**
      @brief Construtor sem parâmetros.
    **/
    Vertice();

    /**
      @brief Configura a posição do vértice no plano do grafo.
    **/
    void setPosition(string novaPosicao);

    /**
      @brief Retorna a posição do vértice no plano do grafo.
    **/
    string getPosition();

    /**
      @brief Configura a cor do vértice.
    **/
    void setColor(string novaCor);

    /**
      @brief Retorna a cor do vértice.
    **/
    string getColor();

    /**
      @brief Configura a cor da fonte do texto do vértice.
    **/
    void setFontcolor(string novaFontecolor);

    /**
      @brief Retorna a cor da fonte do vértice.
    **/
    string getFontcolor();

    /**
      @brief Configura o código do vértice.
    **/
    void setCodigo(string novoCodigo);

    /**
      @brief Retorna o código do vértice.
    **/
    string getCodigo();

    /**
      @brief Configura a informação do vértice no formato para o arquivo .dot.
    **/
    void setInfo();

    /**
      @brief Recebe a informação do vértice no formato para o arquivo .dot.
    **/
    string getInfo();
};

#endif // VERTICE_H
