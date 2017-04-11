#include "Quadrado.h"

Quadrado::Quadrado(string _nome, double _lado){
        setNome(_nome);
        setLado(_lado);
};  

void Quadrado::setLado(double lad){
    lado = lad;
}

double Quadrado::getLado(){return lado;}

double Quadrado::calcularArea(){
    double area;
    area = (getLado()*getLado());
    return area;
}