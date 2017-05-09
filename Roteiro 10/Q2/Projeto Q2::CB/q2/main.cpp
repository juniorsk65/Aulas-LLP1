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
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <stdio.h>
#include "SaldoNaoDisponivelException.h"
#include <stdexcept>

using namespace std;

int main(){

    string nome = "Pedro da Silva";
    double salario = 1230.12;
    int numero = 1;
    double saldo = 1000;
    double deposito = 50;
    double sacar_v = 10000;

    Conta cl(nome,salario,numero,saldo);
    try{
        cl.sacar(sacar_v);
    }catch(runtime_error &error){
        cout<< "Mensagem Antes" <<endl;
        cout<< error.what() <<endl;
    }

    cout<<"O saldo eh "<<cl.Getsaldo()<<" Reais, apos sacar "<< sacar_v << " Reais";

    return 0;
}
