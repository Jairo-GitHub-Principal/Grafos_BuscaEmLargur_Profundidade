#ifndef PILHADINAMICA.H
#define PILHADINAMICA.H
#include "No.h"

class pilhaDinamica
{
private:
    No* NoTopo;
       
public:
    pilhaDinamica(/* args */); // construtor // dinamic stack
    ~pilhaDinamica(); // destrutor
    bool estavazio(); // isempty
    bool estacheio();//tem memorio // isfull
    void inserir(TipoItem item); //push
    TipoItem remover();// pop
    void imprimir();// print
    
    
    
};

#endif