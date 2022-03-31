//Grafo direcionado ponderado

#include "Grafo.hpp"
#include "Cell.hpp"
#include <iostream>

using namespace std;

int main() {
    Grafo *grafo = new Grafo();
    
    Cell *vertice = new Cell(1, 1);

    grafo->addVertice(1);
    grafo->addVertice(2);
    grafo->addVertice(3);
    grafo->addVertice(4);
    grafo->addAresta(1, 2);
    grafo->addAresta(1, 3);
    grafo->addAresta(1, 4);
    grafo->addAresta(2, 2);

    grafo->print();
    
    return 0;
}