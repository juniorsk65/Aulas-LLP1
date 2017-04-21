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

using namespace std;

int main(){
    string nome = "José da Silva";
    double salario = 1230.12;
    int numero = 1;
    double saldo = 1000;

    Conta c;

    c = Conta(nome,salario,numero,saldo);
    cout<<c.GetnomeCliente();
    cout<<endl;
    cout<<c.GetsalarioMensal();
    cout<<endl;
    cout<<c.GetnumeroConta();
    cout<<endl;
    cout<<c.Getsaldo();
    cout<<endl;
    cout<<c.Getlimite();
    cout<<endl;
    c.definirLimite();
    cout<<endl;
    cout<<c.Getlimite();


    ContaEspecial cs;

    cs = ContaEspecial(nome,salario,numero,saldo);
    cout<<cs.GetnomeCliente();
    cout<<endl;
    cout<<cs.GetsalarioMensal();
    cout<<endl;
    cout<<cs.GetnumeroConta();
    cout<<endl;
    cout<<cs.Getsaldo();
    cout<<endl;
    cout<<cs.Getlimite();
    cout<<endl;
    cs.definirLimite();
    cout<<endl;
    cout<<cs.Getlimite();








    return 0;
}
