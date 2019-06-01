#ifndef ARESTA_H
#define ARESTA_H
#include<string>
#include<sstream>
using namespace std;

class Aresta
{
    string info;
    string cor;
public:
    Aresta();
    void setInfo(string novaString);
    string getInfo();

    void setCor(string novaCor);
    string getCor();
    
};

#endif // ARESTA_H
