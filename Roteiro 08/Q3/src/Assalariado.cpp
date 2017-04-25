#include "../include/Assalariado.h"

using namespace std;
Assalariado::Assalariado(double ct_salario){
    setSalario(ct_salario);
}

void Assalariado::setSalario(double _salario){
    salario = _salario;
}
double Assalariado::getSalario(){return salario;}
double Assalariado::calcularSalario(){
    //METODO VIRTUAL
    return salario;
}
