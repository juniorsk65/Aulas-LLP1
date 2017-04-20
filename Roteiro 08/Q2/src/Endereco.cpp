#include "../include/Endereco.h"

Endereco::Endereco(){
    
}
Endereco::Endereco(string ct_logradouro, string ct_bairro, string ct_cidade,
                   string ct_cep, int ct_numero)
{
    setLogradouro(ct_logradouro);
    setBairro(ct_bairro);
    setCidade(ct_cidade);
    setCep(ct_cep);
    setNumero(ct_numero);
}
string Endereco::getLogradouro(){return logradouro;}
string Endereco::getBairro(){return bairro;}
string Endereco::getCidade(){return cidade;}
string Endereco::getCep(){return cep;}
int Endereco::getNumero(){return numero;}

void Endereco::setLogradouro(string logradouro_){
    logradouro = logradouro_;
}
void Endereco::setBairro(string bairro_){
    bairro = bairro_;
}
void Endereco::setCidade(string cidade_){
    cidade = cidade_;
}
void Endereco::setCep(string cep_){
    cep = cep_;
}
void Endereco::setNumero(int numero_){
    numero = numero_;
}