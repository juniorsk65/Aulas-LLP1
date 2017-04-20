#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <iostream>
#include "Imovel.h"

class Apartamento:Imovel{
    private:
        int numeroDeVagasNaGaragem;
        double valorDoCondominio;
        string posicao;
    public:
        void setNumeroDeVagasNaGaragem(int _numeroDeVagasNaGaragem);
        void setValorDoCondominio(double _valorDoCondominio);
        void setPosicao(string _posicao);

        int getNumeroDeVagasNaGaragem();
        double getValorDoCondominio();
        string getPosicao();

        Apartamento();
        Apartamento(int ct_NumeroDeVagasNaGaragem, double ct_valorDoCondominio,
                    string ct_posicao);

};


#endif //APARTAMENTO_H