#ifndef TRABALHADOR
#define TRABALHADOR
#include <string>
#include <iostream>

using namespace std;

class Trabalhador{
	protected:
	string nome;
	double salario;
	public:
	Trabalhador(){}
	Trabalhador(string _nome, double _salario) : nome(_nome), salario(_salario){}
	void setSalario(double s);
	void setNome(string n);
	double getSalario();
	string getNome();
	virtual double calcularPagamento(int horas){};
};
#endif