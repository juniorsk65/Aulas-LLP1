/*
 * Nome   :
 * Data   :
 *
 * Resumo do Codigo:
 1) (a) Crie uma classe chamada Data para representar uma data. Essa classe deve conter três
    atributos: o dia, o mês, e o ano. Considere também que a classe Data contém:
        • Um construtor que inicializa os três atributos e verifica a validade dos valores
        fornecidos;
        • Um método set() um get() para cada atributo;
        • Um método avancarDia() que para avançar uma data para o dia seguinte.
    (b) Crie uma classe DataTest, com um método main, que cria alguns objetos da classe
Data e utiliza as suas operações (métodos).
 *
 * Os todos os meses possuem 31 dias.
 *
 */

// Biliotecas
#include <iostream>
#include "Data.h"

using namespace std;

Data::Data()
{
    //nada;
}

bool Data::avancarDia()
{
    dia++;
    if(dia == 32){
        dia = 1;
        mes++;
        if (mes == 13){
            mes = 1;
            ano++;
        }
    }

}


Data::Data(int D, int M , int A)
{
    if(1 <= D  && D <= 31){
        dia = D;
    }
    if(1 <= M  && M <= 12){
        mes = M;
    }
    if(1 <= A && A <= 32000){
        ano = A;
    }
}


int Data::getDia(){return dia;}

int Data::getMes(){return mes;}

int Data::getAno(){return ano;}

bool Data::setDia(int D){
    if(0 < D < 31){
        dia = D;
        return 0;
        return 0;
    }
    return 1;
}

bool Data::setMes(int M){
    if(0 < M < 12){
        mes = M;
        return 0;
    }
    return 1;
}

bool Data::setAno(int A){
    if(0 < A < 32000){
        ano = A;
        return 0;
    }
    return 1;
}

int main()
{
    Data niver(1,12,1999);

    cout << endl;
    cout << niver.getMes()<<endl<<endl;
    niver.avancarDia();
    cout << niver.getDia()<<endl;
    cout << niver.getMes()<<endl;
    cout << niver.getAno()<<endl;






	return 0;
}
