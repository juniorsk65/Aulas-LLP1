#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    //Criar restaurante e conjunto de mesas
}
void RestauranteCaseiro::adicionaAoPedido(){
    //Chama o adiciona mesa da classe MesaDeRestaurante
    // para ser acrescentado um pedido
}
void RestauranteCaseiro::calculaTotalRestaurante(){
    //Total das mesas
    //Total do restaurante
    int m_esa;
    double total_mesa, caixa;
    for(m_esa = 0; m_esa < 10; m_esa++){
        total_mesa = mesa[m_esa].calculaTotal();
        caixa = caixa + total_mesa;
        }
}

int main()
{
    RestauranteCaseiro restaurante;
    Pedido pedi[10];
    pedi[0] = Pedido(1231, 2, 2.00, "Arroz");
    pedi[1] = Pedido(2536, 3, 3.00, "Feijao");
    pedi[2] = Pedido(3879, 3, 20.00, "Salada");
    pedi[3] = Pedido(9988,1, 40.00, "Lagosta");
    pedi[4] = Pedido(5533, 1, 18.00, "Coca");
    pedi[5] = Pedido(4142, 2, 50.00, "Picanha");


    restaurante.mesa[1].adicionaAoPedido(pedi, 0);
    restaurante.mesa[2].adicionaAoPedido(pedi, 1);
    restaurante.mesa[1].adicionaAoPedido(pedi, 3);
    
    cout.precision(2);//Precisa usar o fixed antes
    cout << restaurante.mesa[1].pedido[0].getDescricao() << endl;
    cout << restaurante.mesa[1].pedido[1].getDescricao() << endl;
    cout << restaurante.mesa[2].pedido[0].getDescricao() << endl;

    cout << fixed << restaurante.mesa[1].calculaTotal() << endl;
    restaurante.mesa[1].zeraPedidos(0);

    cout << restaurante.calculaTotalRestaurante() << endl;

}