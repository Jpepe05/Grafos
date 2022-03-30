#ifndef CELL_HPP
#define CELL_HPP

// Define uma estrutura de lista
class Cell
{
    public: 
        int vertice;
        int peso;
        Cell *next;
        Cell(int vertice, int peso, Cell *next);
        Cell(int vertice, int peso);
        Cell();
        void print();
};

#endif