#include "../include/Terreno.h"

Terreno::Terreno(double ct_area){
    setArea(ct_area);
}
double Terreno::getArea(){return area;}
void Terreno::setArea(double area_){
    area = area_;
}