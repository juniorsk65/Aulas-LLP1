#include "../include/Assalariado.h"

using namespace std;
Assalariado::Assalariado(string ct_nome, int ct_matricula, double ct_salario)
:Funcionario(ct_nome, ct_matricula)
{
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
