#include "../include/Horista.h"

using namespace std;
Horista::Horista(){
    //Construtor
}
Horista::Horista(string ct_nome, int ct_matricula,double ct_salarioPorHora, double ct_horasTrabalhadas)
:Funcionario(ct_nome, ct_matricula)
{
    setSalarioPorHora(ct_salarioPorHora);
    setHorasTrabalhadas(ct_horasTrabalhadas);
}

void Horista::setSalarioPorHora(double _salarioPorHora){
    salarioPorHora = _salarioPorHora;
}
void Horista::setHorasTrabalhadas(double _horasTrabalhadas){
    horasTrabalhadas = _horasTrabalhadas;
}
double Horista::getSalarioPorHora(){return salarioPorHora;}
double Horista::getHorasTrabalhadas(){return horasTrabalhadas;}

double Horista::calcularSalario(){
    //METODO VIRTUAL
    if(horasTrabalhadas <= 40){
        return (salarioPorHora*horasTrabalhadas);
    }else
        return (40*salarioPorHora + (horasTrabalhadas-40)*salarioPorHora*1.5);
}   
