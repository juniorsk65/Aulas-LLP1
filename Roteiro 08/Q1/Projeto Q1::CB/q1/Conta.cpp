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
#include <iostream>

Conta::Conta(string nome, double salarioM, int numeroC, double saldo)
{
    //ctor
    SetnomeCliente(nome);
    SetsalarioMensal(salarioM);
    SetnumeroConta(numeroC);
    Setsaldo(saldo);
    definirLimite();
}

Conta::~Conta()
{
    //dtor
}

void Conta::sacar(double valor){
    if(Getsaldo() >= valor ){
        Setsaldo(Getsaldo() - valor);
    }
    else{
        std::cout<<"Valor insuficiente na conta."<< endl;
    }

}

void Conta::depositar(double valor){
    if(valor > 0){
        Setsaldo(Getsaldo() + valor);
    }
    else{
        std::cout<<"Impossivel depositar um valor negativo"<<endl;
    }
}





void Conta::definirLimite()
{
    //Limite será = 2 * o salário mensal
    Setlimite(2*GetsalarioMensal());
}
