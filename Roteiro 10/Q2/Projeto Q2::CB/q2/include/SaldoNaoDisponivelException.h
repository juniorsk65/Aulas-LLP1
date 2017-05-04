#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

//#include <runtime_error>
#include <exception>
#include <iostream>

class SaldoNaoDisponivelException : public std::runtime_error
{
    public:
        SaldoNaoDisponivelException();
        //~SaldoNaoDisponivelException();
        virtual char * what(){
            return "Valor insuficiente na conta.";
        }

    protected:
    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H

