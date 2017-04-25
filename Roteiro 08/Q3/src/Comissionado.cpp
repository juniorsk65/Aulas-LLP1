#include "../include/Comissionado.h"

using namespace std;

Comissionado::Comissionado(){
    //CONSTRUTOR
}
Comissionado::Comissionado(double ct_vendasSemanais, double ct_percentualComissao){
    setVendasSemanais(ct_vendasSemanais);
    setPercentualComissao(ct_percentualComissao);
}

void Comissionado::setVendasSemanais(double _vendasSemanais){
    vendasSemanais = _vendasSemanais;
}
void Comissionado::setPercentualComissao(double _percentualComissao){
    percentualComissao = _percentualComissao;
}
double Comissionado::getVendasSemanais(){return vendasSemanais;}
double Comissionado::getPercentualComissao(){return percentualComissao;}

double Comissionado::calcularSalario(){
    //METODO VIRTUAL
    return salarioBase + (vendasSemanais*percentualComissao);
}