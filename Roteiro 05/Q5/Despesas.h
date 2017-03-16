#ifndef DESPESAS_H
#define DESPESAS_H

#include <string>

using namespace std;

class Despesas
{
    public:
        Despesas(){};
        Despesas(float val, string tipo);
        //~Despesas();
        double GetValor() { return valor; }
        void SetValor(double val) { valor = val; }
        string GetTipoDeGasto() { return tipoDeGasto; }
        void SetTipoDeGasto(string val) { tipoDeGasto = val; }
    private:
        double valor;
        string tipoDeGasto;
};

#endif // DESPESAS_H
