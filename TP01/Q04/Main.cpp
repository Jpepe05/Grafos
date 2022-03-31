//Grafo não direcionado ponderado

#include "MatrizAdjacente.hpp"
#include <iostream>
using namespace std;

int main()
{
    MatrizAdjacente ma(7);   
    
    ma.addAresta(1, 2, 3);
    ma.addAresta(1, 3, 2);
    ma.addAresta(3, 4, 1);
    ma.addAresta(4, 5, 1);
    ma.addAresta(5, 6, 5);
    ma.addAresta(6, 4, 1);
    ma.addAresta(6, 7, 4);
    ma.addAresta(7, 1, 2);
    
    ma.mostrar();
    
    return 0;
}