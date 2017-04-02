#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

using namespace std;

class MesaDeRestaurante{
    private:
    public:
    Pedido pedido[10];
    int i = 0; //IMPORTANTE: observar implementação
               //Variavel de controle de pedidos
    

    void adicionaAoPedido(Pedido ped);
    void zeraPedidos(int index);
    double calculaTotal(); //Individual de cada mesa
    
    MesaDeRestaurante();
};

#endif// MESADERESTAURANTE_H