#ifndef CONSULTOR_H
#define CONSULTOR_H

#include <Funcionario.h>


class Consultor : public Funcionario
{
    public:
        Consultor();
        virtual ~Consultor();
        float GetSalario() { return Salario; }
    protected:
    private:
};

#endif // CONSULTOR_H
