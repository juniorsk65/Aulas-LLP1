#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include "Funcionario.h"


class SistemaGerenciaFolha{
    private:

    public:
        Funcionario *funcionarios[5];
        void setFuncionarios(Funcionario *func);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

        SistemaGerenciaFolha();

};


#endif //SISTEMAGERENCIAFOLHA_H