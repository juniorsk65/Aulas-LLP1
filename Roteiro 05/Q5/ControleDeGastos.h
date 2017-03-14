#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesas.h"
#include <string>

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos(){};
        void setDespesas(double val, string tipo);
        double calculaTotalDeDespesas();
        bool existeDespesasDoTipo(string tipo);
    private:
        Despesas despesas[100];
        int contador = 0;

};

#endif // CONTROLEDEGASTOS_H

