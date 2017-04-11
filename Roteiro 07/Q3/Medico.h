#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include <string>

using namespace std;

class Medico{
    private:
       string nome;
       double altura, peso;
    public:
        void setNome(string n_ome);
        void setAltura(double a_ltura);
        void setPeso(double p_eso);
        
        string getNome();
        double getAltura();
        double getPeso();

    Medico();
};

#endif //MEDICO_H