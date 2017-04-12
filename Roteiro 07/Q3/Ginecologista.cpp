#include "Ginecologista.h"

Ginecologista::Ginecologista():Medico("Pedro", 1.20, 90){
    
}

string Ginecologista::getEspec(){return especializacao;}
string Ginecologista::getProntuario(){return prontuario;}

void Ginecologista::setProntuario(string pront){
    prontuario = pront;
}