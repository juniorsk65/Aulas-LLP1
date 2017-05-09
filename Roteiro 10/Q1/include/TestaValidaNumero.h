#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include <iostream>
#include <exception>
#include "ExceptionClass.h"

class TestaValidaNumero:public std::exception {
    private:
    
    public:
        TestaValidaNumero();
        void validaNumero(int num);
};

#endif // TESTAVALIDANUMERO_H