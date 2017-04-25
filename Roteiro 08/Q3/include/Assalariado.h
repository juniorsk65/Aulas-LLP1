#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado:Funcionario{
    private:
        double salario;
    public:

        double calcularSalario();
    
        void setSalario(double _salario);
        double getSalario();
        Assalariado(double ct_salario, Funcionario f);

};


#endif //ASSALARIADO_H