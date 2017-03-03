/*******
 * Nome:Lucas Nogueira Nobrega
 *      Luciano Vieira Da Silva Júnior
 *
 * Data:02-03-2017
 *
 * Resumo do código:
 *           Escreva um programa em C++ que simula o lançamento de um dado n vezes e imprime
 *           o percentual de surgimento de cada face do dado. O valor n é introduzido pelo
 *           usuário, sendo que 0 encerra o programa.
 ********
 */

/*
    Tem:
        Do while
            simula n de jogadas
        Criar uma função com:
            imprime o percentual valor/n de jogadas
        Condição 0 = end
*/

//Bibliotecas
#include <iostream>
//#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
//#include <time.h>

using namespace std;

int main()
{
    //Configura a semente do número aleatório
    srand(time(NULL));

    int numero_vezes = 0;
    int i = 0;
    int quantidade_cada_valor[5] = {0};

    cout << "Digite o número de vezes que o dado de 6 faces será lançado:";
    cin >> numero_vezes;

    while(i < numero_vezes){
        cout << "O resultado da jogada nº " << (i + 1) <<" é: " << ((rand() % 6) + 1) << endl;
        i++;
    }
    /*
    A lista está organizada com o index relacionado com a face do dado.
    resultado = index ++

    */
    return 0;
}

