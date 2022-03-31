//Grafo não direcionado não ponderado

#include "MatrizAdjacente.hpp"
#include <iostream>
using namespace std;

int main()
{
    MatrizAdjacente ma(7);   
    
    ma.addAresta(1, 2);
    ma.addAresta(1, 3);
    ma.addAresta(3, 4);
    ma.addAresta(4, 5);
    ma.addAresta(5, 6);
    ma.addAresta(6, 4);
    ma.addAresta(6, 7);
    ma.addAresta(7, 1);
    
    ma.mostrar();
    
    return 0;
}