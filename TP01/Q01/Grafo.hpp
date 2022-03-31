#ifndef GRAFO_HPP
#include "Lista.hpp"
#define GRAFO_HPP

#define NUM_MAX_VERTEX 4

// Matriz de Adjacencia
// Define um grafo não direcionado não ponderado, implementado por lista de adjacência
class Grafo 
{
    public: 
        Lista *listaAdjacencia[NUM_MAX_VERTEX];
        Grafo();
        void addVertice(int label);
        void addAresta(int labelVertexOut, int labelVertexIn);
        void print();

    private:
        void insert(Cell *vertice);
        
};

#endif