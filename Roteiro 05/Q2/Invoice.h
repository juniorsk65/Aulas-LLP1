#ifndef INVOICE_H
#define INVOICE_H
#include <string> //Separando como .h é obrigatorio declarar a biblioteca que não é padrao da linguagem aqui

using namespace std;

class Invoice{
    private: //Definição dos atributos
            int numero, quantidade;
            string descricao; //Quando utilizar uma string, é obrigatorio colocar o namespace no escopo.
            float preco;
    public:
           
            //Set e Get Numero
            void setNumero(int num);
            int getNumero();
            //Set e Get Quantidade
            void setQuantidade(int qtd);   
            int getQuantidade();
            //Set e Get Descrição
            void setDescricao(string desc);
            string getDescricao();
            //Set e Get Preço
            void setPreco(float pre);
            float getPreco();
            //Calculo do valor
            float getInvoiceAmount();
             //Metodo Construtor
            Invoice(int numero_ct = 0, int quantidade_ct = 0, string descricao_ct = "", float preco_ct = 0.0);
};
#endif //INVOICE_H