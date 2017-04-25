#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista: public Funcionario{
    private:
        double salarioPorHora, horasTrabalhadas;
    public:

        double calcularSalario();
    
        void setSalarioPorHora(double _salarioPorHora);
        void setHorasTrabalhadas(double _horasTrabalhadas);
        double getSalarioPorHora();
        double getHorasTrabalhadas();
        Horista();
        Horista(std::string ct_nome, int ct_matricula, double ct_salarioPorHora, double ct_horasTrabalhadas);
};


#endif //HORISTA_H