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

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

void ContaEspecial::definirLimite()
{
    //Limite será = 2 * o salário mensal
    Setlimite(3*GetsalarioMensal());
}
