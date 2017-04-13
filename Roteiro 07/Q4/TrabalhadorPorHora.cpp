#include "TrabalhadorPorHora.h"
double TrabalhadorPorHora::calcularPagamento(int horas){
	if(horas <= 40)
		return salario*horas;
	else
		return 40*salario + (horas-40)*salario*1.5;
}