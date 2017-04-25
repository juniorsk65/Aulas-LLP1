#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include "Funcionario.h"


class SistemaGerenciaFolha{
    private:

    public:
        Funcionario *funcionarios[2];
        void setFuncionarios(Funcionario f);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

        SistemaGerenciaFolha();
        SistemaGerenciaFolha(Funcionario f);

};


#endif //SISTEMAGERENCIAFOLHA_H