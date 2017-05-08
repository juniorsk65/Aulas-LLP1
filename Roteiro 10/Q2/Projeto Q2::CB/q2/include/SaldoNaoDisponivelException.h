#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

//#include <runtime_error>
#include <exception>
#include <iostream>

class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException();
        //~SaldoNaoDisponivelException();
        virtual const char * what(){
            return "Valor insuficiente na conta.";
        }

    protected:
    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H

