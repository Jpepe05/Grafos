#ifndef LISTA_HPP
#include "Cell.hpp"
#define LISTA_HPP


// Define uma estrutura de lista
class Lista
{
    public: 
        Cell *head;
        Lista();
        Lista(Cell *vertice);
        Lista(int vertice, int peso);
};

#endif