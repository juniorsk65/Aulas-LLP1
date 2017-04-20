#include "../include/Apartamento.h"

Apartamento::Apartamento(Endereco e, int ct_numeroDeVagasNaGaragem,
        double ct_valorDoCondominio, string ct_posicao):Imovel(e)
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
string Apartamento::getDescricao(){
    std::ostringstream streamDescricao;
    streamDescricao << "\t" << "ENDERECO APARTAMENTO" << endl
                    << "Logradouro " << "\t\t" << endereco.getLogradouro() << endl
                    << "Bairro " <<  "\t\t\t" << endereco.getBairro() << endl
                    << "Cidade " <<  "\t\t\t" << endereco.getCidade() << endl
                    << "CEP " << "\t\t\t" << endereco.getCep() << endl
                    << "Numero de Vagas " << "\t" << numeroDeVagasNaGaragem << endl
                    << "Valor do Condominio" << "\t" << fixed << setprecision(2) << valorDoCondominio << endl
                    << "Posicao" << "\t\t" << "\t" << posicao << endl;
    return streamDescricao.str();
}
