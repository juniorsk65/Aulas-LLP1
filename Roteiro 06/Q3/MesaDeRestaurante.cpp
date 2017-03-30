#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){

}

void MesaDeRestaurante::adicionaAoPedido(Pedido ped[], int n){
    pedido[0] = ped[0];
    pedido[1] = ped[1];
}

void MesaDeRestaurante::zeraPedidos(){
    pedido[0].setNumero(0);
    pedido[0].setPreco(0);
    pedido[0].setQuantidade(0);
    pedido[0].setDescricao("");
}

double MesaDeRestaurante::calculaTotal(){
    //PEIXE FAZ
}
