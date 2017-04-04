#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include"MesaDeRestaurante.h"

using namespace std;

class RestauranteCaseiro{
    private:

    public:
    MesaDeRestaurante mesa[10] = {};
    
    void adicionaAoPedido(int n_da_mesa ,Pedido p);
    double calculaTotalRestaurante();
    RestauranteCaseiro();
};

#endif// RESTAURANTECASEIRO_H