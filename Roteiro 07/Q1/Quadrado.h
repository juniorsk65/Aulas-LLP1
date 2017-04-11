#ifndef QUADRADO_H
#define QUADRADO_H
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

using namespace std;

class Quadrado:FiguraGeometrica{
    private:
        double lado;
    public:
        void setLado(double lad);

        double getLado();
    
        double calcularArea();

    //    Quadrado();
    Quadrado(string _nome, double _lado);
};


#endif //QUADRADO_H