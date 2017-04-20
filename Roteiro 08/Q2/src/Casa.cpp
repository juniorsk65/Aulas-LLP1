#include "../include/Casa.h"

Casa::Casa(int ct_numeroDePavimentos, int ct_quantidadeDeQuartos,
        double ct_areaDoTerreno, double ct_areaConstruida)
{
    setNumeroDePavimentos(ct_numeroDePavimentos);
    setQuantidadeDeQuartos(ct_quantidadeDeQuartos);
    setAreaDoTerreno(ct_areaDoTerreno);
    setAreaConstruida(ct_areaConstruida);
}

int Casa::getNumeroDePavimentos(){return numeroDePavimentos;}
int Casa::getQuantidadeDeQuartos(){return quantidadeDeQuartos;}
double Casa::getAreaDoTerreno(){return areaDoTerreno;}
double Casa::getAreaConstruida(){return areaConstruida;}

void Casa::setNumeroDePavimentos(int _numeroDePavimentos){
    numeroDePavimentos = _numeroDePavimentos;
}
void Casa::setQuantidadeDeQuartos(int _quantidadeDeQuartos){
    quantidadeDeQuartos = _quantidadeDeQuartos;
}
void Casa::setAreaDoTerreno(double _areaDoTerreno){
    areaDoTerreno = _areaDoTerreno;
}
void Casa::setAreaConstruida(double _areaConstruida){
    areaConstruida = _areaConstruida;
}
