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
        Assalariado( Funcionario f, double ct_salario);

};


#endif //ASSALARIADO_H