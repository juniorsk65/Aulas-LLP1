#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include <iomanip>
#include "Funcionario.h"


class SistemaGerenciaFolha{
    private:

    public:
        Funcionario *funcionarios[5];
        void setFuncionarios(Funcionario *func, int index);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(int i);

        SistemaGerenciaFolha();
};


#endif //SISTEMAGERENCIAFOLHA_H