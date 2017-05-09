#ifndef EXCEPTIONCLASS
#define EXCEPTIONCLASS

#include <iostream>
#include <exception>

class ValorAbaixoException: public std::exception {
    private:
        
    public:
        const char* what(){
            return "Valor menor que 0";
        }
        //ValorAbaixoException();
};

class ValorAcimaException: public std::exception {
    private:

    public:
        const char* what(){
            return "Valor entre 100 e 1000";
        }
        //ValorAcimaException();
};

class ValorMuitoAcimaException: public std::exception {
    private:

    public:
        const char* what(){
            return "Valor maior que 1000";
        }
        //ValorMuitoAcimaException();
}; 

#endif // EXCEPTIONCLASS