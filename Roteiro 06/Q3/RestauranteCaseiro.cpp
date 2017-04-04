#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    //Criar restaurante e conjunto de mesas, construtor padrão
}
void RestauranteCaseiro::adicionaAoPedido(int n_da_mesa ,Pedido p){
    //Verifica se o produto já existe na comanda
    //Se sim faça:
    // Adicione um valor no lugar certo
    //Se não:
    // Crie um novo campo em que ficará esse produto
    int k, p_qtd;
    
    for(k = 0; k < 9 ;k++){
        if(mesa[n_da_mesa].pedido[k].getDescricao() == p.getDescricao())
        {    
           p_qtd = mesa[n_da_mesa].pedido[k].getQuantidade(); 
           mesa[n_da_mesa].pedido[k].setQuantidade(p_qtd++);
           break;
        }else{
        //Chama o adiciona mesa da classe MesaDeRestaurante
        //para ser acrescentado um pedido
           mesa[n_da_mesa].adicionaAoPedido(p);
        }
    }
}
double RestauranteCaseiro::calculaTotalRestaurante(){
    //Total das mesas, utilizar este metodo para reduzir implementação
    //Total do restaurante 
    int m_esa;
    double total_mesa, caixa;
    for(m_esa = 0; m_esa < 3; m_esa++){
        total_mesa = mesa[m_esa].calculaTotal();
        caixa = caixa + total_mesa;
        }

    return caixa;
}