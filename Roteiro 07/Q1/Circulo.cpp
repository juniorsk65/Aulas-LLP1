#include "Circulo.h"

Circulo::Circulo(string _nome, double _raio){
        setNome(_nome);
        setRaio(_raio);
};  

void Circulo::setRaio(double r){
    raio = r;
}

double Circulo::getRaio(){return raio;}

double Circulo::calcularArea(){
    double area;
    area = (getRaio()*getRaio()*3.14);
    return area;
}