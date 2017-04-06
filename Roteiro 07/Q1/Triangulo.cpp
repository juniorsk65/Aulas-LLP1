#include "Triangulo.h"

Triangulo::Triangulo(string _nome, double _altura, double _base){
        setNome(_nome);
        setAltura(_altura);
        setBase(_base);
};  

void Triangulo::setAltura(double alt){
    altura = alt;
}

void Triangulo::setBase(double bas){
    base = bas;
}

double Triangulo::getAltura(){return altura;}
double Triangulo::getBase(){return base;}

double Triangulo::calcularArea(){
    double area;
    area = (getAltura()*getBase())/2;
    return area;
}