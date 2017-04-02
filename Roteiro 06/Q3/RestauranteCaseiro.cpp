#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    //Criar restaurante e conjunto de mesas
}
void RestauranteCaseiro::adicionaAoPedido(int n_da_mesa ,Pedido p){
    //Verifica se o produto já existe na comanda
    //Se sim faça:
    // Adicione um valor no lugar certo
    //Se não:
    // Crie um novo campo em que ficará esse produto
    int k;

    for(k = 0; k < 9 ;k++){
        if(mesa[n_da_mesa].pedido[k].getDescricao() == p.getDescricao())
        {    
           mesa[n_da_mesa].pedido[k].setQuantidade(mesa[n_da_mesa].pedido[k].getQuantidade() + 1); 
        }else{
        //Chama o adiciona mesa da classe MesaDeRestaurante
        //para ser acrescentado um pedido
           mesa[n_da_mesa].adicionaAoPedido(p);
        }

    }
}
double RestauranteCaseiro::calculaTotalRestaurante(){
    //Total das mesas
    //Total do restaurante
    int m_esa;
    double total_mesa, caixa;
    for(m_esa = 0; m_esa < 10; m_esa++){
        total_mesa = mesa[m_esa].calculaTotal();
        caixa = caixa + total_mesa;
        }

    return caixa;
}