#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        virtual const char* what() const noexcept{
            return "Funcionario nao existe";
        }
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
