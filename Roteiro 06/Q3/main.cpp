//#include <iostream>
#include "RestauranteCaseiro.h"
//#include "MesaDeRestaurante.h"
//#include "Pedido.h"

using namespace std;

int main(){
    RestauranteCaseiro restaurante;
    //Cardápio
    Pedido pedi[10];
    pedi[0] = Pedido(1231, 2, 2.00, "Arroz");
    pedi[1] = Pedido(2536, 3, 3.00, "Feijao");
    pedi[2] = Pedido(3879, 3, 20.00, "Salada");
    pedi[3] = Pedido(9988,1, 40.00, "Lagosta");
    pedi[4] = Pedido(5533, 1, 18.00, "Coca");
    pedi[5] = Pedido(4142, 2, 50.00, "Picanha");
    //Fim Cardápio

    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    restaurante.mesa[2].adicionaAoPedido(pedi[2]);//Salada na mesa 2
    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    
    cout.precision(2);//Precisa usar o fixed antes
    cout << restaurante.mesa[1].pedido[0].getDescricao() << endl;
    cout << restaurante.mesa[1].pedido[1].getDescricao() << endl;
    cout << restaurante.mesa[2].pedido[0].getDescricao() << endl;

    cout << fixed << restaurante.mesa[1].calculaTotal() << endl;
    restaurante.mesa[1].zeraPedidos(0);

    
    cout << restaurante.calculaTotalRestaurante() << endl;
    
    //Na Mesa 1 adiciona o pedido numero 5
    restaurante.adicionaAoPedido(1,pedi[5]);
    
    cout << restaurante.calculaTotalRestaurante() << endl;
    return 0;
}