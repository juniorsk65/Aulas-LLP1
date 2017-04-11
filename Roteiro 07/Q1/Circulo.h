#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

using namespace std;

class Circulo:FiguraGeometrica{
    private:
        double raio;
    public:
        void setRaio(double r);

        double getRaio();
    
        double calcularArea();

    //    Circulo();
    Circulo(string _nome, double _raio);
};


#endif //CIRCULO_H