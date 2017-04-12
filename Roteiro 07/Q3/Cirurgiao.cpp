#include "Cirurgiao.h"

Cirurgiao::Cirurgiao():Medico("Jose", 1.70 , 80){
    
}

string Cirurgiao::getEspec(){return especializacao;}
string Cirurgiao::getProntuario(){return prontuario;}

void Cirurgiao::setProntuario(string pront){
    prontuario = pront;
}