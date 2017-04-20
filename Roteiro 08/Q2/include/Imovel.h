#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Endereco.h"
using namespace std;

class Imovel {
    private:
        
    public:
        Endereco endereco;
        Endereco getEndereco();
        virtual string getDescricao()=0;
        Imovel(Endereco e) : endereco(e){}
    Imovel();
};


#endif //IMOVEL_H