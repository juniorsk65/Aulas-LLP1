#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
#include "Endereco.h"
using namespace std;

class Imovel {
    public:
        virtual string getDescricao();
        Endereco endereco = Endereco();
        Imovel();
};


#endif //IMOVEL_H