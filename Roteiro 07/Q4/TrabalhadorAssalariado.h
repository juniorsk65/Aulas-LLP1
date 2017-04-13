#include "Trabalhador.h"
class TrabalhadorAssalariado : public Trabalhador{
	public:
	TrabalhadorAssalariado(){}
	TrabalhadorAssalariado(string _nome, double _salario) : Trabalhador(_nome, _salario){}
	double calcularPagamento(int horas);
};