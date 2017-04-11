#include "Medico.h"

Medico::Medico(){

};

void Medico::setNome(string n_ome){
    nome = n_ome;
}
void Medico::setAltura(double a_ltura){
    altura = a_ltura;
}
void Medico::setPeso(double p_eso){
    peso = p_eso;
}

string Medico::getNome(){return nome;}
double Medico::getAltura(){return altura;}
double Medico::getPeso(){return peso;}
