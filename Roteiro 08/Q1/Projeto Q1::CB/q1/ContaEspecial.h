#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(){};
        ContaEspecial(string nome, double salarioM, int numeroC, double saldo);
        virtual ~ContaEspecial(){};
        void definirLimite();
    protected:
    private:
};

#endif // CONTAESPECIAL_H
