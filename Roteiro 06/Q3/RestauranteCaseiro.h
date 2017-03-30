#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include"MesaDeRestaurante.cpp"

using namespace std;

class RestauranteCaseiro{
    private:

    public:
    MesaDeRestaurante mesa[10];
    
    void adicionaAoPedido();
    void calculaTotalRestaurante();
    RestauranteCaseiro();
};

#endif// RESTAURANTECASEIRO_H