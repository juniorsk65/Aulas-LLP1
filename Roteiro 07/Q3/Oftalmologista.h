#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include <iostream>
#include <string>
#include "Medico.h"

using namespace std;

class Oftalmologista:Medico{
    private:
       string especializacao = "Oftalmologista";
       string prontuario;
    public:
      string getEspec();
      string getProntuario();

      void setProntuario(string pront);
    Oftalmologista();
};

#endif //OFTALMOLOGISTA_H