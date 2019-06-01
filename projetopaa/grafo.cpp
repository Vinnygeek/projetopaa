#include "grafo.h"
#include<fstream>
#include<stdlib.h>

Grafo::Grafo()
{

}

void Grafo::addAresta(string novaAresta){
    arestas.push_back(novaAresta);

}

void Grafo::addVertice(Vertice novoVertice){
    vertices.push_back(novoVertice);

}

void Grafo::setComeco(){
    stringstream ss;
    string s;
    ss <<"digraph {"<<'\n'
       <<"graph [pad=\"2,4\" bgcolor=lightgray]\n"
       <<"node [style=filled shape=cds fontsize=20.0 fontname=\"times bold\"]"<<'\n'
       <<"PER_1 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"0,18!\"]"<<'\n'
       <<"PER_2 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"2,18!\"]"<<'\n'
       <<"PER_3 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"4,18!\"]"<<'\n'
       <<"PER_4 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"6,18!\"]"<<'\n'
       <<"PER_5 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"8,18!\"]"<<'\n'
       <<"PER_6 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"10,18!\"]"<<'\n'
       <<"PER_7 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"12,18!\"]"<<'\n'
       <<"PER_8 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"14,18!\"]"<<'\n'
       <<"PER_9 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"16,18!\"]"<<'\n'
       <<"PER_10 [fillcolor=\"#d3d3d3\" fontcolor=\"black\" pos=\"18,18!\"]"<<'\n'
       <<"node [style=filled shape=folder fontsize=20.0 fontname=\"times bold\"]"<<'\n';
    s = ss.str();
    comeco = s;

}

void Grafo::setFim(){
    fim = "}\n";
}

void Grafo::setEdgeStyle(string color){
        stringstream ss;
        string s;
        ss <<" edge [style=\"\", weight=10,color="<<color<<", len=.2]\n";
        s = ss.str();
        cout<<s<<endl;
        edgeStyle = s;
}

void Grafo::gerarGraphvizDiscente(){
    setComeco();
    setFim();

    ofstream saida;
    saida.open("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoDiscente.dot");

    saida << comeco;
    for(int i = 0; i < 76; i++){
        if(!vertices.empty())
            saida << vertices[i].getInfo();
    }

    setEdgeStyle("Black");
    saida << getEdgeStyle();

    for(int i = 0; i < arestas.size();++ i){
        saida <<arestas[i];
    }

    saida << fim;

    saida.close();
    system("dot -Kfdp -n -Tpng -O /home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoDiscente.dot");
    system("xdg-open /home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoDiscente.dot.png");
}

void Grafo::gerarGraphvizCoord(){
    setComeco();
    setFim();

    ofstream saida;
    saida.open("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoCoord.dot");

    saida << comeco;
    for(int i = 0; i < 76; i++){
        if(!vertices.empty())
            saida << vertices[i].getInfo();
    }

    setEdgeStyle("Black");
    saida << getEdgeStyle();

    for(int i = 0; i < arestas.size();++ i){
        saida <<arestas[i];
    }

    saida << fim;

    saida.close();
    system("dot -Kfdp -n -Tpng -O /home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoCoord.dot");
    system("xdg-open /home/vinicius/git_workspace/projetopaa/projetopaa/xml/grafoCoord.dot.png");
}


string Grafo::getEdgeStyle(){
    return edgeStyle;
}

string Grafo::getComeco(){
    return comeco;

}

string Grafo::getFim(){
    return fim;

}

void openPNG(){


}
