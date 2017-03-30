#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.cpp"

using namespace std;

class MesaDeRestaurante{
    private:
    // PEIXE FAZ
    public:
    Pedido pedido[10];

    void adicionaAoPedido();
    void zeraPedidos();
    double calculaTotal(); //Individual de cada mesa

    MesaDeRestaurante();
};

#endif// MESADERESTAURANTE_H