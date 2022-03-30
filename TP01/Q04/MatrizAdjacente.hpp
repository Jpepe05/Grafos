class MatrizAdjacente
{
    private:
        int n;
        int **matriz;
        bool *visitado;
    public:
        MatrizAdjacente(int n);
        void addAresta(int origem, int destino, int peso);
        void mostrar();
        
};