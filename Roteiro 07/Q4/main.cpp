#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;

int main(){ //Nome do trabalhador , valor da hora de trabalho
	TrabalhadorAssalariado Joao(string("Joao"), 25);
	TrabalhadorPorHora Pedro(string("Pedro"), 10);
	cout << "Salario com 60 horas de trabalho, modalidade assalariado: "	<< Pedro.calcularPagamento(60) << endl;
	cout << "Salario com 40 horas de trabalho, modalidade por hora: "	<< Joao.calcularPagamento(40) << endl;
}