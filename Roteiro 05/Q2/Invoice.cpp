#include "Invoice.h"
#include <iostream>

using namespace std;
//Implementação do metodo construtor e passagem dos parametros para a criação do objeto;
//variavel_ct = variavel do construtor
Invoice::Invoice(int numero_ct, int quantidade_ct, string descricao_ct, float preco_ct){
        setNumero(numero_ct);
        setQuantidade(quantidade_ct);
        setDescricao(descricao_ct);
        setPreco(preco_ct);
}
//Métodos GET/ Apenas retornam o valor da instancia quando chamado
int Invoice::getNumero(){ return numero; }
int Invoice::getQuantidade(){ return quantidade; }
string Invoice::getDescricao(){ return descricao; }
float Invoice::getPreco(){ return preco; }
//Métodos SET/ Atribuição de valor nas instancias quando chamado
void Invoice::setNumero(int num){
        numero = num;
}

void Invoice::setQuantidade(int qtd){
        quantidade = qtd;
}

void Invoice::setDescricao(string desc){
        descricao = desc;
}

void Invoice::setPreco(float pre){
        preco = pre;
}
//MAIN
int main(){
        //Testando a implementação da classe e criando um objeto chamado fatura
        Invoice fatura( 1, 2,"teste de string2", 20.00);
        //Recebendo os valores do objeto fatura
        int n_o = fatura.getNumero();
        int q_o = fatura.getQuantidade();
        string d_o = fatura.getDescricao();
        float p_o = fatura.getPreco();
        //joga na tela
        cout << n_o << endl;
        cout << q_o << endl;
        cout << d_o << endl;
        cout << p_o << endl;
}