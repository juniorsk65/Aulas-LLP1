#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado:Funcionario{
    private:
        double vendasSemanais, percentualComissao,salarioBase=500.00;
    public:

        double calcularSalario();
        void setVendasSemanais(double _vendasSemanais);
        void setPercentualComissao(double _percentualComissao);
        double getVendasSemanais();
        double getPercentualComissao();
        Comissionado();
        Comissionado(Funcionario *f, double ct_vendasSemanais, double ct_percentualComissao);

};


#endif //COMISSIONADO_H