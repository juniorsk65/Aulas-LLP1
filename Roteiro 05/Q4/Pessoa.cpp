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
    Pessoa One(31, 99091542, "João Silva");
    Pessoa Two(21, 98761025, "Larissa Almeida");
    Pessoa Three(20, 98415263, "Luciano Vieira");

    cout << "NOME" << "\t\t" << "IDADE" << "\t" << "TELEFONE" << endl;
    cout << One.getNome() << "\t  " << One.getIdade() << "\t" << One.getTelefone() << endl;
    cout << Two.getNome() << "\t  " << Two.getIdade() << "\t" << Two.getTelefone() << endl;
    cout << Three.getNome() << "\t  " << Three.getIdade() << "\t" << Three.getTelefone() << endl;
}
int main(){
    CadastroDePessoa teste;
    teste.main();
}