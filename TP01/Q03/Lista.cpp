#include "Lista.hpp"
#include "stdio.h"
#include "stdlib.h"

Lista::Lista() {

}

Lista::Lista(Cell *vertice) {
    this->head = vertice;
}

Lista::Lista(int vertice, int peso) {
    this->head = new Cell(vertice, 0);
}