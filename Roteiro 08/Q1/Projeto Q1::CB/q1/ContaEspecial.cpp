/*******
 * Nome:
 * Data:
 *
 * Resumo do código:
 *
 *
 *
 ********
 */
#include "ContaEspecial.h"

ContaEspecial::Conta(string nome, double salarioM, int numeroC, double saldo)
{
    //ctor
}

/*
ContaEspecial::~ContaEspecial()
{
    //dtor
}
*/
void ContaEspecial::definirLimite()
{
    //Limite será = 2 * o salário mensal
    Setlimite(3*GetsalarioMensal());
}
