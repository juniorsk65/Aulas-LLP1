#include "../include/Apartamento.h"

Apartamento::Apartamento(Endereco e, int ct_numeroDeVagasNaGaragem,
        double ct_valorDoCondominio, string ct_posicao)
{
    setNumeroDeVagasNaGaragem(ct_numeroDeVagasNaGaragem);
    setValorDoCondominio(ct_valorDoCondominio);
    setPosicao(ct_posicao);
}

int Apartamento::getNumeroDeVagasNaGaragem(){return numeroDeVagasNaGaragem;}
double Apartamento::getValorDoCondominio(){return valorDoCondominio;}
string Apartamento::getPosicao(){return posicao;}

void Apartamento::setNumeroDeVagasNaGaragem(int _numeroDeVagasNaGaragem){
    numeroDeVagasNaGaragem = _numeroDeVagasNaGaragem;
}
void Apartamento:: setValorDoCondominio(double _valorDoCondominio){
    valorDoCondominio = _valorDoCondominio;
}
void Apartamento::setPosicao(string _posicao){
    posicao = _posicao;
}
