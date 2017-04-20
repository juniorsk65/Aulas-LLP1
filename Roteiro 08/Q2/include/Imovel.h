#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
#include "Endereco.h"
using namespace std;

class Imovel {
    public:
        Endereco endereco;
        Endereco getEndereco();
        virtual string getDescricao()=0;
};


#endif //IMOVEL_H