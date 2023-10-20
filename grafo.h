#include <iostream>
#include "pilhadinamica.h"
#include "FilaDinamica.h"

using namespace std;

class Grafo{
    private:
    int arestanula,maxvertices,numvertices;
    TipoItem* vertices;
    int** matrizadjacencias;
    bool* marcador;

    public:

    Grafo(int max, int valorarestanula);
    ~Grafo();
    int obterindice(TipoItem item);
    bool estacheio();
    void inserevertice(TipoItem item);
    void inserearesta(TipoItem Nosaida,TipoItem Noentrada,int peso);
    int obterpeso(TipoItem Nosaida,TipoItem Noentrada);
    int obtergrau(TipoItem item);
    void imprimirmatriz();
    void imprimirvertices();

    // novos que não tinha no projeto Grafo busca

    void limpamarcador();
    void buscaemlargura(TipoItem origem, TipoItem destino);
    void buscaemprofundidade(TipoItem origem, TipoItem destino);




    
}; 