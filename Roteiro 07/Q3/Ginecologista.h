#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include <iostream>
#include <string>
#include "Medico.h"

using namespace std;

class Ginecologista:Medico{
    private:
       string especializacao = "Ginecologista  ";
       string prontuario;
    public:
      string getEspec();
      string getProntuario();

      void setProntuario(string pront);
    Ginecologista  ();
};

#endif //GINECOLOGISTA_H