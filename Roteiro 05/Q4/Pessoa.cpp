#include "Pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

Pessoa::Pessoa(int idade_ct, int telefone_ct, string nome_ct){
        setIdade(idade_ct);
        setTelefone(telefone_ct);
        setNome(nome_ct);
}

int Pessoa::getIdade(){return idade;}
int Pessoa::getTelefone(){return telefone;}
string Pessoa::getNome(){return nome;}

void Pessoa::setIdade(int num){
    idade = num;
}

void Pessoa::setTelefone(int tel){
    telefone = tel;
}

void Pessoa::setNome(string nome_h){
    nome = nome_h;
}

void CadastroDePessoa::main(){
    Pessoa Joao(31, 99091542, "Joao Silva");
    Pessoa Larissa(21, 98761025, "Larissa Almeida");
    Pessoa Luciano(20, 98415263, "Luciano Vieira");
    
}
int main(){
    
}