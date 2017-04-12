#include "Medico.h"

Medico::Medico(string _nome, double _altura, double _peso){
    nome = _nome;
    altura = _altura;
    peso = _peso;
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
