#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

using namespace std;

class Conta : public IConta
{
    public:
        Conta(){};
        Conta(string nome, double salarioM, int numeroC, double saldo);
        virtual ~Conta();

        string GetnomeCliente() { return nomeCliente; }
        void SetnomeCliente(string val) { nomeCliente = val; }

        double GetsalarioMensal() { return salarioMensal; }
        void SetsalarioMensal(double val) { salarioMensal = val; }

        int GetnumeroConta() { return numeroConta; }
        void SetnumeroConta(int val) { numeroConta = val; }

        double Getsaldo() { return saldo; }
        void Setsaldo(double val) { saldo = val; }

        double Getlimite() { return limite; }
        void Setlimite(double val) { limite = val; }
        void definirLimite();

        void sacar(double valor);
        void depositar(double valor);

    protected:
    private:
        string nomeCliente;
        double salarioMensal;
        double numeroConta;
        double saldo;
        double limite;
};

#endif // CONTA_H
