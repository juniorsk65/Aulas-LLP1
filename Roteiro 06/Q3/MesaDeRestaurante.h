#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

using namespace std;

class MesaDeRestaurante{
    private:
    
    public:
    Pedido pedido[10];

    void adicionaAoPedido(Pedido ped[], int n);
    void zeraPedidos();
    double calculaTotal(); //Individual de cada mesa
    
    MesaDeRestaurante();
};

#endif// MESADERESTAURANTE_H