#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include <iostream>
#include <exception>

class TestaValidaNumero:public std::exception {
    private:
        int num;
    public:
        TestaValidaNumero();
        void validaNumero(int num);
};

#endif // TESTAVALIDANUMERO_H