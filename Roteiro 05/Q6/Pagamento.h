#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

class Pagamento{
    private:
        double valorPagamento;
        string nomeDoFuncionario;
    public:
        void setValorPagamento(double value);
        double getValorPagamento();

        void setNomeDoFuncionario(string nome);
        string getNomeDoFuncionario();
        //Construtores
        Pagamento(){};
        Pagamento(double valor_ct, string nome_ct);  
};

class ControleDePagamento{
    private:
        int j = 0;
        int nPagamentos = 0;
    public:
        Pagamento pagamentos[100];
        void setPg(Pagamento pg[], int n);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);
        void listarPagamentos();
        ControleDePagamento();
};


#endif //PAGAMENTO_H