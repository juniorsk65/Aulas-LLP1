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

    //Inserindo Pedidos
    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    restaurante.mesa[2].adicionaAoPedido(pedi[2]);//Salada na mesa 2
    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    
    //Exibindo em lista os pedidos realizados
    cout.precision(2);//Precisa usar o fixed antes, setando precisão do double
    cout << "Pedidos realizados até o momento" << endl;
    cout << restaurante.mesa[1].pedido[0].getDescricao() << endl;
    cout << restaurante.mesa[1].pedido[1].getDescricao() << endl;
    cout << restaurante.mesa[2].pedido[0].getDescricao() << endl;

    //Calculando total parcial de mesa 1 e mesa 2
    cout << "\nTotal Mesa 1 = " << fixed << restaurante.mesa[1].calculaTotal() << endl;
    cout << "Total Mesa 2 = " <<fixed << restaurante.mesa[2].calculaTotal() << endl;

    //Zerando o pedido da mesa 1, "0" representa o numero do pedido
    cout << "\nZerando pedido de mesa 1" << endl;
    restaurante.mesa[1].zeraPedidos(0);
    
    //Calculando total parcial da mesa 1
    cout << "\nTotal Mesa 1 = " << fixed << restaurante.mesa[1].calculaTotal() << endl;
    
    //Calculando total o total vendido pelo restaurante
    cout << "\nCaixa = " << restaurante.calculaTotalRestaurante() << endl;
    
    //Na Mesa 1 adiciona o pedido numero 5
    cout << "\nAdicionando pedido a mesa 1" << endl;
    restaurante.adicionaAoPedido(1,pedi[5]);
    
    //Calculando o total vendido pelo restaurante
    cout << "\nCaixa = " << restaurante.calculaTotalRestaurante() << endl;
    return 0;
}