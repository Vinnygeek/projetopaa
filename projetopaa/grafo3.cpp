#include "grafo3.h"

Grafo3::Grafo3(int V)
{
    this->V = V;
    adj = new list<int>[V];
}


void Grafo3::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Grafo3::DFSUtil(int v, bool visited[],Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha)
{
    cout<<"Dentro da dfs util------------------------------------------------"<<endl;
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    //Adicionando Aresta com a cor específica para cada perfil
    /** -------------------------------------------------------------------------------------------------*/
                stringstream sss;
                Aresta novaAresta;
                Vertice novoVertice;
                novoVertice.setCodigo(gradinha[v].getCodigo());
                if(gradinha[v].getNumAprovadas() > gradinha[v].getNumReprovadas()){
                    novoVertice.setColor("green;0.3:white");
                    novoVertice.setFontcolor("white");
                }
                else{
                    novoVertice.setColor("red;0.3:white");
                    novoVertice.setFontcolor("white");
                }
                novoVertice.setPosition(gradinha[v].getPosicao());
                GrafoParaPerfil.addVertice(novoVertice);

                if(gradinha[v].getCodigo() == "MATI01" || gradinha[v].getCodigo() == "MATI02" || gradinha[v].getCodigo() == "EMEI06"||
                        gradinha[v].getCodigo() == "MATI06" || gradinha[v].getCodigo() == "MATI07"|| gradinha[v].getCodigo() == "MATI04" ||
                            gradinha[v].getCodigo() == "MATI05" || gradinha[v].getCodigo() == "MATI08"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM01"<<'\n';
                            novaAresta.setInfo(sss.str());
                            novaAresta.setCor("Red"); //ff0000
                    }
                else if(gradinha[v].getCodigo() == "ECOI03"){
                            sss <<gradinha[v].getCodigo() <<" -> "<<"COM02"<<'\n';
                            novaAresta.setInfo(sss.str());
                            novaAresta.setCor("Salmon"); //0000ff

                    }
                else if(gradinha[v].getCodigo() == "FISI01" || gradinha[v].getCodigo() == "EMTI02" || gradinha[v].getCodigo() == "EMTI03" ||
                        gradinha[v].getCodigo() == "FISI02" || gradinha[v].getCodigo() == "FISI03" || gradinha[v].getCodigo() == "EMBI02" ||
                        gradinha[v].getCodigo() == "EMEI07" || gradinha[v].getCodigo() == "EMEI08" || gradinha[v].getCodigo() == "FISI04" ||
                        gradinha[v].getCodigo() == "FISI05" || gradinha[v].getCodigo() == "FISI07" || gradinha[v].getCodigo() == "FISI06"){
                        sss <<gradinha[v].getCodigo() <<" -> "<<"COM03"<<'\n';
                        novaAresta.setInfo(sss.str());
                        novaAresta.setCor("orange");  //ffa500
                        }
                else if(gradinha[v].getCodigo() == "EPRI30"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM04"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("yellow");} //ffff00
                else if(gradinha[v].getCodigo() == "ECOI02" || gradinha[v].getCodigo() == "ECOI09"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM05"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("gold");} //ffc0cb
                else if(gradinha[v].getCodigo() == "ECOI04" || gradinha[v].getCodigo() == "ECOI08" || gradinha[v].getCodigo() == "ECOI11"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM06"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("darkgoldenrod");} //b8860b
                else if(gradinha[v].getCodigo() == "ECOI13"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM07"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("khaki");} //ff6347
                else if(gradinha[v].getCodigo() == "ECOI16"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM08"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("tan");} //ff00ff
                else if(gradinha[v].getCodigo() == "ECOI25"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM09"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("grey");} //4b0082
                else if(gradinha[v].getCodigo() == "ECOI14"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM10"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("blue");} //ffa07a
                else if(gradinha[v].getCodigo() == "EELIO7" || gradinha[v].getCodigo() == "ECOI10" || gradinha[v].getCodigo() == "EELI10" ||
                        gradinha[v].getCodigo() == "EELI11" || gradinha[v].getCodigo() == "ECOI32" || gradinha[v].getCodigo() == "EELI12" ||
                        gradinha[v].getCodigo() == "EELI13" || gradinha[v].getCodigo() == "ECOI33"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM11"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("blueviolet");} //ffd700
                else if(gradinha[v].getCodigo() == "EELI02" || gradinha[v].getCodigo() == "EELI03" || gradinha[v].getCodigo() == "ECAI11" ||
                        gradinha[v].getCodigo() == "EELI14" || gradinha[v].getCodigo() == "EELI15" || gradinha[v].getCodigo() == "ECOI07"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM12"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("cyan");} //7b68ee
                else if(gradinha[v].getCodigo() == "ECOI12" || gradinha[v].getCodigo() == "ECOI15"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM13"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("darkorchid");} // #daa520
                else if(gradinha[v].getCodigo() == "ECAI26" || gradinha[v].getCodigo() == "ECAI44" || gradinha[v].getCodigo() == "ECAI13"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM14"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("pink");} //008080
                else if(gradinha[v].getCodigo() == "ECOI22"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM15"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("purple");} //da70d6
                else if(gradinha[v].getCodigo() == "ECAI29" || gradinha[v].getCodigo() == "ECAI04" || gradinha[v].getCodigo() == "ECAI05" ||
                        gradinha[v].getCodigo() == "ECAI07"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM16"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("turquoise");} //dda0dd
                else if(gradinha[v].getCodigo() == "ECOI18" || gradinha[v].getCodigo() == "ECOI19" || gradinha[v].getCodigo() == "ECOI21"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM17"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("deeppink");} //1e90ff
                else if(gradinha[v].getCodigo() == "ECOI23"){
                    sss <<gradinha[v].getCodigo() <<" -> "<<"COM18"<<'\n';
                    novaAresta.setInfo(sss.str());
                    novaAresta.setCor("magenta");} //f0e686
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
void Grafo3::DFS(Grafo &GrafoParaPerfil, vector<DisciplinaPerfil> &gradinha)
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
