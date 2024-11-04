#include <iostream>
#include <vector>

typedef struct noAresta{
    int v;
    noAresta * prox;
}noAresta;

class Grafo{
public:
    size_t num_de_vertices, num_de_arestas;
    std::vector<noAresta *> lista_de_adjacencia;

    void insere(int u, int v){
        noAresta *p;
        p = lista_de_adjacencia[u];
        lista_de_adjacencia[u] = new noAresta;
        lista_de_adjacencia[u]->v = v;
        lista_de_adjacencia[u]->prox = p;
    }

    void lerGrafo(size_t & nV, size_t & nA, std::vector<std::pair<int,int>> & arrayP){
        int i;
        /*
        std::cout << "Insira o numero de vertices : ";
        std::cin >> num_de_vertices;
        std::cout << "Insira o numero de arestas : ";
        std::cin >> num_de_arestas;
        */
        num_de_arestas = nA;
        num_de_vertices = nV;
        lista_de_adjacencia.resize(num_de_vertices);

        for(auto & i : lista_de_adjacencia)
        {
            i = nullptr;
        }

        int u,v;
        /*
        for(size_t i{0} ; i < num_de_arestas ; ++i)
        {
            std::cout << "Insira o par de vertices da aresta [ u v ] : ";
            std::cin >> u >> v;
            insere(u,v);
            insere(v,u);
        }*/
       for(auto & par : arrayP)
       {
        insere(par.first,par.second);
        insere(par.second,par.first);
       }
    }

    void imprimeGrafo(){
        int i, j;
        noAresta * p;
        for(size_t i{1} ; i <= num_de_vertices ; ++i)
        {
            p = lista_de_adjacencia[i];
            std::cout << i << ": ";
            while(p!=nullptr)
            {
                std::cout << p->v << " ";
                delete p;
                p = p->prox;
            }
            std::cout << '\n';
        }
    }
};

int main(){
    
    Grafo g;
    std::vector<std::pair<int, int>> array_de_par_de_vertices{
        {1,2},
        {1,3},
        {1,4},
        {4,3},
        {2,3},
        {4,5},
        {3,5}
    };
    size_t num_de_vertices{5};
    size_t num_de_arestas{5};

    
    g.lerGrafo(num_de_vertices,num_de_arestas,array_de_par_de_vertices);
    g.imprimeGrafo();
    std::cout << "terminou bem" << '\n';
    return 0;
}