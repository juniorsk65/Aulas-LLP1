#ifndef TERRENO_H
#define TERRENO_H

#include <iostream>
#include "Imovel.h"

class Terreno:public Imovel{
    private:
        double area;
    public:
        double getArea();
        void setArea(double area_);
        Terreno(Endereco e, double ct_area);
};


#endif //TERRENO_H