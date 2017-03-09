/**
 * Nome   : Lucas Nogueira Nobrega E Luciano Vieira da Silva Junior

 * Data   : 9/03/17
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
#include "DataTest.h"

using namespace std;

void Data::avancarDia()
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
    setDia(D);
    setMes(M);
    setAno(A);
}

int Data::getDia(){return dia;}

int Data::getMes(){return mes;}

int Data::getAno(){return ano;}

void Data::setDia(int D){
    if(0 < D && D < 31){
        dia = D;
    }else{
        dia = 1;
        cout << "Dia fora do intervalo existente" << endl;
        cout << "Valor padrão será utilizado" << endl;

    }
}

void Data::setMes(int M){
    if(0 < M && M < 12){
        mes = M;
    }else{
        mes = 1;
        cout << "Mês fora do intervalo existente" << endl;
        cout << "Valor padrão será utilizado" << endl;
    }
}

void Data::setAno(int A){
    if(-10000 < A && A < 32000){
        ano = A;
    }
}

void Data::PrintDataCompleta(){
    cout << dia << "/" << mes << "/" << ano << endl;
}

int DataTest::main()
{


    Data d;
    int aux;

    cout << "Digite um Dia:";
    cin >> aux;
    d.setDia(aux);
    cout << "O dia armazenado é:" << d.getDia() << endl;


    cout << "Digite um Mês:";
    cin >> aux;
    d.setMes(aux);
    cout << "O mês armazenado é:" << d.getMes() << endl;

    cout << "Digite um Ano:";
    cin >> aux;
    d.setAno(aux);
    cout << "O ano armazenado é:" << d.getAno() << endl;

    d.PrintDataCompleta();

    d.avancarDia();

    cout << endl;

    d.PrintDataCompleta();

	return 0;
}

int main()
{
    DataTest teste;
    teste.main();

}







