#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>

using namespace std;

class Pedido{
    private:
        int numero, quantidade;
        double preco;
        string descricao;
    public:
    void setNumero(int num);
    int getNumero();

    void setQuantidade(int qtd);
    int getQuantidade();

    void setPreco(double prc);
    double getPreco();

    void setDescricao(string descri);
    string getDescricao();

    Pedido(){};
    Pedido(int _numero, int _quantidade, double _preco, string _descricao);
};

#endif// PEDIDO_H