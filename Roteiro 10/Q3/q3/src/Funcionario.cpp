#include "../include/Funcionario.h"


using namespace std;

Funcionario::Funcionario(){
    //CONSTRUTOR PADRAO
}
Funcionario::Funcionario(string ct_nome, int ct_matricula){
    setNome(ct_nome);
    setMatricula(ct_matricula);
}
void Funcionario::setNome(string _nome){
    nome = _nome;
}
void Funcionario::setMatricula(int _matricula){
    matricula = _matricula;
}
string Funcionario::getNome(){return nome;}
int Funcionario::getMatricula(){return matricula;}
