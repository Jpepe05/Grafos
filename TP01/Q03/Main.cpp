//Grafo direcionado ponderado

#include "Grafo.hpp"
#include "Cell.hpp"
#include <iostream>

using namespace std;

int main() {
    Grafo *grafo = new Grafo();
    
    Cell *vertex = new Cell(1, 1);

    grafo->addVertice(1);
    grafo->addVertice(2);
    grafo->addVertice(3);
    grafo->addVertice(4);
    grafo->addAresta(1, 2, 2);
    grafo->addAresta(1, 3, 1);
    grafo->addAresta(1, 4, 7);
    grafo->addAresta(2, 2, 4);
    
    grafo->print();
    
    return 0;
}