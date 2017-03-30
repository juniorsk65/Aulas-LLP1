#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    //Criar mesas
}
void RestauranteCaseiro::adicionaAoPedido(){
    //Chama o adiciona mesa da classe MesaDeRestaurante
    // para ser acrescentado um pedido
}
void RestauranteCaseiro::calculaTotalRestaurante(){
    //Total das mesas
    //Total do restaurante
}

int main()
{
    RestauranteCaseiro restaurante;
    Pedido pedi[10];
    pedi[0] = Pedido(1231, 2, 2.00, "Arroz");
    pedi[1] = Pedido(2536, 3, 3.00, "Feijao");

    restaurante.mesa[1].adicionaAoPedido(pedi, 1);
    
    cout << restaurante.mesa[1].pedido[0].getNumero() << endl;
    cout << restaurante.mesa[1].pedido[0].getQuantidade() << endl;
    cout << restaurante.mesa[1].pedido[0].getPreco() << endl;
    cout << restaurante.mesa[1].pedido[0].getDescricao() << endl;
}