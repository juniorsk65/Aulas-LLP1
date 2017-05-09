#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario{
    private:
        std::string nome;
        int matricula;
    public:
        double virtual calcularSalario()=0;
    
        void setNome(std::string _nome);
        void setMatricula(int _matricula);
        std::string getNome();
        int getMatricula();
        Funcionario();
        Funcionario(std::string ct_nome,int ct_matricula);
};


#endif //FUNCIONARIO_H