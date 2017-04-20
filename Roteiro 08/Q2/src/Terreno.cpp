#include "../include/Terreno.h"

Terreno::Terreno(Endereco e, double ct_area){
    setArea(ct_area);
}
double Terreno::getArea(){return area;}
void Terreno::setArea(double area_){
    area = area_;
}
string Terreno::getDescricao(){
    
}