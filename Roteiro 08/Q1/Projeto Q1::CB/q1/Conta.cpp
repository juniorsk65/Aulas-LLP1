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
#include "Conta.h"

Conta::Conta(string nome, double salarioM, int numeroC, double saldo)
{
    //ctor
    SetnomeCliente(nome);
    SetsalarioMensal(salarioM);
    SetnumeroConta(numeroC);
    Setsaldo(saldo);

}

Conta::~Conta()
{
    //dtor
}
void Conta::definirLimite()
{
    //Limite será = 2 * o salário mensal
    Setlimite(2*GetsalarioMensal());
}
