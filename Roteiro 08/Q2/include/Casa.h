#ifndef CASA_H
#define CASA_H

#include <iostream>
#include "Imovel.h"

class Casa:Imovel{
    private:
        int numeroDePavimentos, quantidadeDeQuartos;
        double areaDoTerreno, areaConstruida;
    public:
        void setNumeroDePavimentos(int _numeroDePavimentos);
        void setQuantidadeDeQuartos(int _quantidadeDeQuartos);
        void setAreaDoTerreno(double _areaDoTerreno);
        void setAreaConstruida(double _areaConstruida);

        int getNumeroDePavimentos();
        int getQuantidadeDeQuartos();
        double getAreaDoTerreno();
        double getAreaConstruida();
        string getDescricao();

        Casa();
        Casa(Endereco e, int ct_numeroDePavimentos, int ct_quantidadeDeQuartos,
         double ct_areaDoTerreno, double ct_areaConstruida);
};


#endif //CASA_H
