#include "MatrizAdjacente.hpp"
#include <iostream>
using namespace std;

int main()
{
    int vertices, max_vertices, origem, destino, peso;

    cout<<"Digite o numero de vertices: ";
    cin>>vertices;
    
    MatrizAdjacente ma(vertices);
    max_vertices = vertices * (vertices - 1);
    
    for (int i = 0; i < max_vertices; i++)
    {
        cout<<"Digite a aresta e o peso(-1 -1 -1 to exit): ";
        cin>>origem>>destino>> peso;
        if((origem == -1) && (destino == -1) && (peso == -1))
            break;
        ma.addAresta(origem, destino, peso);
    }
    ma.mostrar();
    
    return 0;
}