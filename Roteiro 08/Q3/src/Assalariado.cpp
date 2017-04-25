#include "../include/Assalariado.h"

using namespace std;
Assalariado::Assalariado( Funcionario f, double ct_salario):Funcionario(f){
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
