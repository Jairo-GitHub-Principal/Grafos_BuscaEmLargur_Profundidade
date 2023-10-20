#ifndef FILADINAMICA.H
#define FILADINAMICA.H
#include "No.h"

class FilaDinamica{
private:
    No* primeiro;
    No* ultimo;
    
public:
    FilaDinamica(); // metodo construtor
    ~FilaDinamica();// metodo destrutor
    bool estavazio();// isempty
    bool estacheio();// isfull
    void inserir(TipoItem item);// push //enqueue
    TipoItem remover();//pop//dequeue
    void imprimir();// print
};


#endif