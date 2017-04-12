#include "Oftalmologista.h"

Oftalmologista::Oftalmologista():Medico("Gabriel", 1.20, 90){
    
}

string Oftalmologista::getEspec(){return especializacao;}
string Oftalmologista::getProntuario(){return prontuario;}

void Oftalmologista::setProntuario(string pront){
    prontuario = pront;
}