#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

using namespace std;

class Triangulo:FiguraGeometrica{
    private:
        double altura, base;
    public:
        void setAltura(double alt);
        void setBase(double bas);

        double getAltura();
        double getBase();
    
        double calcularArea();

    //    Triangulo();
    Triangulo(string _nome, double _altura, double _base);
};


#endif //TRIANGULO_H