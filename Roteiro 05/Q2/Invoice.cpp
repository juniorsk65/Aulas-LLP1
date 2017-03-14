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
        if(qtd > 0) //Validando o valor inserido pelo usuario
        {
                 quantidade = qtd;
        }else{
                quantidade = 0;
        }
}

void Invoice::setDescricao(string desc){
        descricao = desc;
}

void Invoice::setPreco(float pre){
        if(pre > 0)//Validando o valor inserido pelo usuario
        {
                preco = pre;
        }else{
                preco = 0;
        }
}

float Invoice::getInvoiceAmount(void){
        return preco*quantidade;
}       
//MAIN DE TESTES
void InvoiceTest::main()
{
        Invoice fatura(1001, 2, "Teclado", 20.00);//instancia de teste
        cout << "FATURA" << endl;
        cout << "Total = " << fatura.getInvoiceAmount();//exibindo o total
}

//MAIN GERAL
int main(){ 
        InvoiceTest faturatotal; //Criando uma instancia de teste
        faturatotal.main(); //Acessando o metodo main da instancia fauratotal, que no caso
                           //foi criada pela classe InvoiceTest.
}
