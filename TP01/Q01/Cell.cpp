#include "Cell.hpp"
#include "stdio.h"

Cell::Cell(int vertice, int peso, Cell *next) {
    this->vertice = vertice;
    this->peso = peso;
    this->next = next;
}

Cell::Cell(int vertice, int peso) {
    this->vertice = vertice;
    this->peso = peso;
    this->next = NULL;
}

Cell::Cell() {
    this->vertice = 0;
    this->peso = 0;
}

void Cell::print() {
    Cell *aux = this; 
    while(aux != NULL) {
        printf("[%i,%i]->", aux->vertice, aux->peso);
        aux = aux->next;
    }
}