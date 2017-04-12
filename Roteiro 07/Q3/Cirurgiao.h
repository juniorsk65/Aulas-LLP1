#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include <iostream>
#include <string>
#include "Medico.h"

using namespace std;

class Cirurgiao:Medico{
    private:
       string especializacao = "Cirurgiao";
       string prontuario;
    public:
      string getEspec();
      string getProntuario();

      void setProntuario(string pront);
    Cirurgiao();
};

#endif //CIRURGIAO_H