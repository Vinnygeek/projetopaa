#include "grafo2.h"

Grafo2::Grafo2(int V)
{
    this->V = V;
    adj = new list<int>[V];

}


void Grafo2::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Grafo2::DFSUtil(int v, bool visited[],Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha)
{
    cout<<"Dentro da dfs util------------------------------------------------"<<endl;
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    //Adicionando Aresta com a cor específica para cada perfil
    /** -------------------------------------------------------------------------------------------------*/
                stringstream sss;
                Aresta novaAresta;
                //sss <<gradinha[v].getCodigo() <<" -> "<<"MATEST"<<'\n';
                //novaAresta.setInfo(sss.str());
                        //if(gradinha[v].getSituacao() == "APR")
                            //novaAresta.setCor("Green");
                        /*else*/ if(gradinha[v].getCodigo() == "MATI01" || gradinha[v].getCodigo() == "MATI02" || gradinha[v].getCodigo() == "EMEI06"||
                                gradinha[v].getCodigo() == "MATI06" || gradinha[v].getCodigo() == "MATI07"|| gradinha[v].getCodigo() == "MATI04" ||
                                    gradinha[v].getCodigo() == "MATI05" || gradinha[v].getCodigo() == "MATI08"){
                                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM01"<<'\n';
                                    novaAresta.setInfo(sss.str());
                                    if(gradinha[v].getSituacao() == "APR")
                                        novaAresta.setCor("Green");
                                    else
                                        novaAresta.setCor("Red"); //ff0000
                            }
                        else if(gradinha[v].getCodigo() == "ECOI03"){
                                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM02"<<'\n';
                                    novaAresta.setInfo(sss.str());
                                    if(gradinha[v].getSituacao() == "APR")
                                        novaAresta.setCor("Green");
                                    else
                                        novaAresta.setCor("Salmon"); //ff0000

                            }
                        else if(gradinha[v].getCodigo() == "FISI01" || gradinha[v].getCodigo() == "EMTI02" || gradinha[v].getCodigo() == "EMTI03" ||
                                gradinha[v].getCodigo() == "FISI02" || gradinha[v].getCodigo() == "FISI03" || gradinha[v].getCodigo() == "EMBI02" ||
                                gradinha[v].getCodigo() == "EMEI07" || gradinha[v].getCodigo() == "EMEI08" || gradinha[v].getCodigo() == "FISI04" ||
                                gradinha[v].getCodigo() == "FISI05" || gradinha[v].getCodigo() == "FISI07" || gradinha[v].getCodigo() == "FISI06"){
                                sss <<gradinha[v].getCodigo() <<" -> "<<"COM03"<<'\n';
                                novaAresta.setInfo(sss.str());
                                if(gradinha[v].getSituacao() == "APR")
                                    novaAresta.setCor("Green");
                                else
                                    novaAresta.setCor("orange"); //ff0000
                                }
                        else if(gradinha[v].getCodigo() == "EPRI30"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM04"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("yellow"); //ff0000
                            } //ffff00

                        else if(gradinha[v].getCodigo() == "ECOI02" || gradinha[v].getCodigo() == "ECOI09"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM05"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("gold"); //ff0000

                        } //ffc0cb
                        else if(gradinha[v].getCodigo() == "ECOI04" || gradinha[v].getCodigo() == "ECOI08" || gradinha[v].getCodigo() == "ECOI11"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM06"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("darkgoldenrod"); //ff0000
                        } //b8860b
                        else if(gradinha[v].getCodigo() == "ECOI13"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM07"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("khaki");
                        } //ff6347
                        else if(gradinha[v].getCodigo() == "ECOI16"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM08"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("tan");
                        } //ff00ff
                        else if(gradinha[v].getCodigo() == "ECOI25"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM09"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("grey");
                        } //4b0082
                        else if(gradinha[v].getCodigo() == "ECOI14"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM10"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("blue");
                        } //ffa07a
                        else if(gradinha[v].getCodigo() == "EELIO7" || gradinha[v].getCodigo() == "ECOI10" || gradinha[v].getCodigo() == "EELI10" ||
                                gradinha[v].getCodigo() == "EELI11" || gradinha[v].getCodigo() == "ECOI32" || gradinha[v].getCodigo() == "EELI12" ||
                                gradinha[v].getCodigo() == "EELI13" || gradinha[v].getCodigo() == "ECOI33"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM11"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("blueviolet");
                        } //ffd700
                        else if(gradinha[v].getCodigo() == "EELI02" || gradinha[v].getCodigo() == "EELI03" || gradinha[v].getCodigo() == "ECAI11" ||
                                gradinha[v].getCodigo() == "EELI14" || gradinha[v].getCodigo() == "EELI15" || gradinha[v].getCodigo() == "ECOI07"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM12"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("cyan");
                        } //7b68ee
                        else if(gradinha[v].getCodigo() == "ECOI12" || gradinha[v].getCodigo() == "ECOI15"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM13"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("darkorchid");
                        } // #daa520
                        else if(gradinha[v].getCodigo() == "ECAI26" || gradinha[v].getCodigo() == "ECAI44" || gradinha[v].getCodigo() == "ECAI13"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM14"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("pink");
                        } //008080
                        else if(gradinha[v].getCodigo() == "ECOI22"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM15"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("purple");
                        } //da70d6
                        else if(gradinha[v].getCodigo() == "ECAI29" || gradinha[v].getCodigo() == "ECAI04" || gradinha[v].getCodigo() == "ECAI05" ||
                                gradinha[v].getCodigo() == "ECAI07"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM16"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("turquoise");
                        } //dda0dd
                        else if(gradinha[v].getCodigo() == "ECOI18" || gradinha[v].getCodigo() == "ECOI19" || gradinha[v].getCodigo() == "ECOI21"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM17"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("deeppink");
                        } //1e90ff
                        else if(gradinha[v].getCodigo() == "ECOI23"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM18"<<'\n';
                            novaAresta.setInfo(sss.str());
                            if(gradinha[v].getSituacao() == "APR")
                                novaAresta.setCor("Green");
                            else
                                novaAresta.setCor("magenta");
                        } //f0e686
                        else {}

                GrafoParaPerfil.addAresta(novaAresta);
    /** -------------------------------------------------------------------------------------------------*/

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited, GrafoParaPerfil, gradinha);
}

// The function to do DFS traversal. It uses recursive DFSUtil()
void Grafo2::DFS(Grafo &GrafoParaPerfil, vector<Disciplina> &gradinha)
{
    cout<<"Dentro da DFS--------------------------"<<endl;;
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            DFSUtil(i, visited, GrafoParaPerfil, gradinha);
}
