#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

using namespace std; 

#include <iostream>
#include <string>

class FiguraGeometrica{
    private:
        string nome;
    public:
        void setNome(string name);
        string getNome();
        double calcularArea();
    
    FiguraGeometrica();
};



#endif //FIGURAGEOMETRICA_H