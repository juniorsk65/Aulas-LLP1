#include "Trabalhador.h"
void Trabalhador::setSalario(double s){
	if(s >= 0)
		salario = s;
    else cout << "INVALIDO" << endl;
}
void Trabalhador::setNome(string n){
	nome = n;
}
double Trabalhador::getSalario(){return salario;}
std::string Trabalhador::getNome(){return nome;}