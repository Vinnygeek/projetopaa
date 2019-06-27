#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include<iostream>
#include<vector>
#include<string>
    using namespace std;
/**
 * @brief Esta classe servirá como estrutura de dados para o armazenamento de todas as informações pertinentes
 * à cada disciplina dos cursos.
 * @param nome atributo que armazena o nome da disciplina. Ex: Circuitos Integrados Analógicos.
 * @param codigo Este atributo armazena o código da disciplina. Ex: ECOI33.1.
 * @param semestre Este atributo armazena o semestre regular da disciplina.
 * @param situacao Este atributo armazena a situação do discente quanto a disciplina: Ex: "APR" para aprovado, "REP" para
 * reprovado e "NR" para não realizada.
 * @param carga Este atributo armazena a carga horária da disciplina.
 * @param repindex Este atributo armazena em porcentagem a qtd de alunos reprovados na disciplina.
 * @param pontuacao Este atributo armazena a pontuação obtida pelo discente ao ser aprovado na mesma.
 */
class Disciplina
{
    string nome;
    string codigo;
    int semestre;
    string situacao;
    double carga;
    double repindex;
    double pontuacao;
    vector<string> dependencias;
public:    
    /**
      @brief O método construtor configura todos os atributos do objeto criado com os respectivos parâmetros passados pelo mesmo.
    * @param nome atributo que armazena o nome da disciplina. Ex: Circuitos Integrados Analógicos.
    * @param codigo Este atributo armazena o código da disciplina. Ex: ECOI33.1.
    * @param semestre Este atributo armazena o semestre regular da disciplina.
    * @param situacao Este atributo armazena a situação do discente quanto a disciplina: Ex: "APR" para aprovado, "REP" para
    * reprovado e "NR" para não realizada.
    * @param carga Este atributo armazena a carga horária da disciplina.
    * @param repindex Este atributo armazena em porcentagem a quantidade de alunos reprovados na disciplina.
    * @param pontuacao Este atributo armazena a pontuação obtida pelo discente ao ser aprovado na mesma.
    * @param dependencias Este atributo contém todos os prerequisitos de cada disciplina.
    **/
    Disciplina(string Nome, string Codigo,int Semestre, string Situacao, double Carga,double Repindex);

    /**
      @brief Retorna o atributo nome.
    **/
    string getNome();

    /**
      @brief Retorna o atributo codigo.
    **/
    string getCodigo();

    /**
      @brief Retorna o atributo semestre.
    **/
    int getSemestre();

    /**
      @brief Retorna o atributo situacao.
    **/
    string getSituacao();

    /**
      @brief Retorna o atributo carga.
    **/
    double getCarga();

    /**
      @brief Retorna o atributo repindex.
    **/
    double getRepIndex();

    /**
      @brief Retorna o atributo pontuacao.
    **/
    double getPontuacao();
    vector<string> getDependencias();

    /**
      @brief Este método adiciona uma nova dependência à disciplina.
    **/
    void addDependencias( string novadependencia);

    /*//Precisa ser testada
    void removeDependencias(string velhadependencia){
        for(unsigned long i = 0; i<dependencias.size();i++){
            vector<string>::iterator it = dependencias.begin() + i;
            if(this->dependencias[i] == velhadependencia)
                this->dependencias.erase(it);
        }
    }*/

    /**
      @brief Configura o atributo nome.
    **/
    void setNome(string Nome);

    /**
      @brief Configura o atributo codigo.
    **/
    void setCodigo(string Codigo);

    /**
      @brief Configura o atributo semestre.
    **/
    void setSemestre(int NewSemestre);

    /**
      @brief Configura o atributo situacao.
    **/
    void setSituacao(string Situacao);

    /**
      @brief Configura o atributo carga.
    **/
    void setCarga(double Carga);

    /**
      @brief Configura o atributo repindex.
    **/
    void setRepIndex(double Repindex);

    /**
      @brief Configura o atributo pontuacao.
    **/
    void setPontuacao(double Pontuacao);
};

#endif // DISCIPLINA_H
