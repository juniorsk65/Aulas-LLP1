#include "../include/Terreno.h"

Terreno::Terreno(Endereco e, double ct_area):Imovel(e){
    setArea(ct_area);
}
double Terreno::getArea(){return area;}
void Terreno::setArea(double area_){
    area = area_;
}
string Terreno::getDescricao(){
    std::ostringstream streamDescricao;
    streamDescricao << "\t" << "ENDERECO TERRENO" << endl
                    << "Logradouro " << "\t\t" << endereco.getLogradouro() << endl
                    << "Bairro " <<  "\t\t\t" << endereco.getBairro() << endl
                    << "Cidade " <<  "\t\t\t" << endereco.getCidade() << endl
                    << "CEP " << "\t\t\t" << endereco.getCep() << endl
                    << "Area " << "\t\t\t" << fixed << setprecision(2) << area << endl;
    return streamDescricao.str();
}