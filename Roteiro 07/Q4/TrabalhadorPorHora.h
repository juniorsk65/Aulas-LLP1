#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
	public:
	TrabalhadorPorHora(){}
	TrabalhadorPorHora(string _nome, double _salario) : Trabalhador(_nome,_salario){}
	double calcularPagamento(int horas);
};