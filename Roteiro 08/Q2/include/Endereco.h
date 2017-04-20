#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>
using namespace std;

class Endereco {
    private:
        string logradouro, bairro, cidade, cep;
        int numero;
    public:
        string getLogradouro();
        string getBairro();
        string getCidade();
        string getCep();
        int getNumero();

        void setLogradouro(string logradouro_);
        void setBairro(string bairro_);
        void setCidade(string cidade_);
        void setCep(string cep_);
        void setNumero(int numero_);

        Endereco();
        Endereco(string ct_logradouro, string ct_bairro, string ct_cidade, 
                string ct_cep, int ct_numero);
};


#endif //ENDERECO_H