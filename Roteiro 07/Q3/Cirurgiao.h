#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include <iostream>
#include <string>
#include "Medico.h"

using namespace std;

class Cirurgiao:Medico{
    private:
       string especializacao;
    public:
      void setEspec(string espec);
      string getEspec();
      
    Cirurgiao(string _nome, double _altura, double _peso, string _espec);
};

#endif //CIRURGIAO_H