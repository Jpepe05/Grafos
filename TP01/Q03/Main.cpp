#include "Grafo.hpp"
#include "Cell.hpp"
#include <iostream>

using namespace std;

int main() {
    Grafo *grafo = new Grafo();
    
    Cell *vertex = new Cell(1, 1);

    grafo->insertVertex(1);
    grafo->insertVertex(2);
    grafo->insertVertex(3);
    grafo->insertVertex(4);
    grafo->insertEdge(1, 2, 2);
    grafo->insertEdge(1, 3, 1);
    grafo->insertEdge(1, 4, 7);
    grafo->insertEdge(2, 2, 4);
    grafo->print();
    
    return 0;
}