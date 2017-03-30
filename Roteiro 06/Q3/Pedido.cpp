#include "Pedido.h"

Pedido::Pedido(int _numero, int _quantidade, double _preco, string _descricao){
     setNumero(_numero);
     setQuantidade(_quantidade);
     setPreco(_preco);
     setDescricao(_descricao);
};

int Pedido::getNumero(){return numero;}
int Pedido::getQuantidade(){return quantidade;}
double Pedido::getPreco(){return preco;}
string Pedido::getDescricao(){return descricao;}


int main()
{
        //PEIXE FAZ
}
