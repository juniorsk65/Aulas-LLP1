#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

//#include <runtime_error>
#include <stdexcept>
//#include <exception>
#include <iostream>

class SaldoNaoDisponivelException : public std::runtime_error
{
    public:
        SaldoNaoDisponivelException();
        //~SaldoNaoDisponivelException();
        /*const char * what(){
            return "Valor insuficiente na conta.";
        }*/
};

#endif // SALDONAODISPONIVELEXCEPTION_H

