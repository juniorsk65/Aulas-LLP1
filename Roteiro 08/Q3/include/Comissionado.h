#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado: public Funcionario{
    private:
        double vendasSemanais, percentualComissao,salarioBase=500.00;
    public:

        double calcularSalario();
        void setVendasSemanais(double _vendasSemanais);
        void setPercentualComissao(double _percentualComissao);
        double getVendasSemanais();
        double getPercentualComissao();
        Comissionado();
        Comissionado(std::string ct_nome, int ct_matricula,double ct_vendasSemanais, double ct_percentualComissao);

};


#endif //COMISSIONADO_H