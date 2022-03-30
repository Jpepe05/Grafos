#include "Grafo.hpp"
#include "stdio.h"
#include "stdlib.h"

Grafo::Grafo() {
    
}

void Grafo::insertVertex(int label) {
    Grafo::insert(new Cell(label, 0));
}

void Grafo::insert(Cell *vertice) {

    int index = (vertice->vertice)-1;
    
    if(listaAdjacencia[index] == NULL) {
        listaAdjacencia[index] = (Lista*)malloc(sizeof(Lista));
        listaAdjacencia[index] = new Lista(vertice);
    } else {
        printf("These vetex exists");
    }
}

void Grafo::insertEdge(int labelVertexOut, int labelVertexIn) {
    int index = labelVertexOut-1;

    if(listaAdjacencia[index] != NULL && listaAdjacencia[labelVertexIn-1] != NULL) {
        Cell *aux = listaAdjacencia[index]->head; 
        
        while(aux->next != NULL) {
            aux = aux->next;
        }

        aux->next = new Cell(labelVertexIn, 1);
    }
}

void Grafo::print() {
    for(int i = 0; i < NUM_MAX_VERTEX; i++) {
        if(listaAdjacencia[i] != NULL) {
            printf("[%i]-> ", listaAdjacencia[i]->head->vertice);
            listaAdjacencia[i]->head->next->print();
        }
        printf("\n");
    }
}