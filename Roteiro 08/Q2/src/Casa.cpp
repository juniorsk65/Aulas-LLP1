#include "../include/Casa.h"

Casa::Casa(Endereco e, int ct_numeroDePavimentos, int ct_quantidadeDeQuartos,
        double ct_areaDoTerreno, double ct_areaConstruida):Imovel(e)
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
string Casa::getDescricao(){
    std::ostringstream streamDescricao;

    streamDescricao << "\t" << "ENDERECO CASA" << endl
                    << "Logradouro " << "\t\t" << endereco.getLogradouro() << endl
                    << "Bairro " <<  "\t\t\t" << endereco.getBairro() << endl
                    << "Cidade " <<  "\t\t\t" << endereco.getCidade() << endl
                    << "CEP " << "\t\t\t" << endereco.getCep() << endl
                    << "Numero " << "\t\t\t" << endereco.getNumero() << endl
                    << "Numero de Pavimentos " << "\t" << numeroDePavimentos << endl
                    << "Quantidade de quartos" << "\t" <<quantidadeDeQuartos << endl
                    << "Area do Terreno" << "\t\t" << fixed << setprecision(2) <<areaDoTerreno << endl
                    << "Area Construida" << "\t\t" << fixed << setprecision(2) << areaConstruida << endl;
    return streamDescricao.str();
}
