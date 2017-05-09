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
#include "SaldoNaoDisponivelException.h"

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
    /*(b)Implemente	uma	nova	versão	do	método	sacar()	na	classe	Conta	que	deve	lançar	uma
exceção	do	tipo	SaldoNaoDisponivelException,	quando	o	valor	a	ser	sacado	é	maior
que	o	saldo	disponível.*/

    if(Getsaldo() < valor ){
        //std::cout<<"Valor insuficiente na conta."<< endl;
        //lançar uma exceção do tipo SaldoNaoDisponivelException
        throw SaldoNaoDisponivelException();
    }
    else{
        Setsaldo(Getsaldo() - valor);
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
