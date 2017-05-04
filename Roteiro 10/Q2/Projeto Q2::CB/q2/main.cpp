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



using namespace std;

int main(){

    string nome = "Pedro da Silva";
    double salario = 1230.12;
    int numero = 1;
    double saldo = 1000;
    double deposito = 50;
    double sacar_v = 100;

    Conta c(nome,salario,numero,saldo);

    cout<<"O nome do cliente eh: "<<c.GetnomeCliente();
    cout<<endl;
    cout<<"O salario mensal eh: "<<c.GetsalarioMensal();
    cout<<endl;
    cout<<"O Numero da conta eh: "<<c.GetnumeroConta();
    cout<<endl;
    cout<<"O saldo eh "<<c.Getsaldo()<<" Reais.";
    cout<<endl;
    cout<<"O limite eh "<<c.Getlimite()<<" Reais.";
    cout<<endl;
    c.definirLimite();
    cout<<"O limite eh: "<<c.Getlimite()<<" Reais.";
    cout<<endl;
    c.depositar(deposito);
    cout<<"O saldo eh "<<c.Getsaldo()<<" Reais, apos depositar "<< deposito << " Reais";
    cout<<endl;
    c.sacar(sacar_v);
    cout<<"O saldo eh "<<c.Getsaldo()<<" Reais, apos sacar "<< sacar_v << " Reais";

    cout<<endl<<"\nCONTA ESPECIAL\n"<<endl;

    ContaEspecial cs;


    cs = ContaEspecial(nome,salario,numero,saldo);

    cout<<"O nome do cliente eh: "<<cs.GetnomeCliente();
    cout<<endl;
    cout<<"O salario mensal eh: "<<cs.GetsalarioMensal();
    cout<<endl;
    cout<<"O Numero da conta eh: "<<cs.GetnumeroConta();
    cout<<endl;
    cout<<"O saldo eh "<<cs.Getsaldo()<<" Reais.";
    cout<<endl;
    cout<<"O limite eh "<<cs.Getlimite()<<" Reais.";
    cout<<endl;
    cs.definirLimite();
    cout<<"O limite eh: "<<cs.Getlimite()<<" Reais.";
    cout<<endl;
    cs.depositar(deposito);
    cout<<"O saldo eh "<<cs.Getsaldo()<<" Reais, apos depositar "<< deposito << " Reais";
    cout<<endl;
    cs.sacar(sacar_v);
    cout<<"O saldo eh "<<cs.Getsaldo()<<" Reais, apos sacar "<< sacar_v << " Reais";

    cout<<endl;


    return 0;
}
