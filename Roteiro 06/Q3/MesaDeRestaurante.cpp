#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){}

void MesaDeRestaurante::adicionaAoPedido(Pedido ped){
    pedido[i] = ped;
    i++; 

    //i é uma variavel global que controla qtd de 
    //pedidos que foram realizados dentro da mesa
}

void MesaDeRestaurante::zeraPedidos(int index){
     //Zera um pedido especifico, requer parametro
        pedido[index].setNumero(0);
        pedido[index].setPreco(0);
        pedido[index].setQuantidade(0);
        pedido[index].setDescricao("");
}

double MesaDeRestaurante::calculaTotal(){
    //Calcula total de cada mesa
    int p_qtd,j; //LOCAL
    double mesa_soma, p_preco;
        for(j = 0; j < i; j++){
            p_preco = pedido[j].getPreco();
            p_qtd = pedido[j].getQuantidade();
            mesa_soma = mesa_soma + (p_preco*p_qtd);
        }
    return mesa_soma;
    //IMPORTANTE
    //Variavel i é global, utilizada para verificar
    //quantos pedidos foram feitos pela mesa
    //j é local, apenas para o contador
    //p_qtd = quantidade do pedido(local)
    //p_preco = preço do pedido(local)
}
