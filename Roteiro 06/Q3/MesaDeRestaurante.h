#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.cpp"

using namespace std;

class MesaDeRestaurante{
    private:
        int j = 0;
        int nMesas = 0; 
    public:
    Pedido pedido[10];

    void adicionaAoPedido(Pedido ped[], int n);
    void zeraPedidos();
    double calculaTotal(); //Individual de cada mesa
    
    MesaDeRestaurante();
};

#endif// MESADERESTAURANTE_H