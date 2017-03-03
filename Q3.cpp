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

//Bibliotecas
#include <iostream>
//#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     // srand, rand
#include <iomanip>      // formatação do número decimal

//#include <time.h>

using namespace std;

float CalculaPorcentual(int numero_de_votos, int total_de_votos){
    float porcentagem = 0.0;
    porcentagem = (float) numero_de_votos/(float) total_de_votos;
    return porcentagem*100;
}

int main()
{
    //Configura a semente do número aleatório
    srand(time(NULL));

    int numero_vezes = 1;

    while(numero_vezes != 0){
        int i = 0;
        int quantidade_cada_valor[5] = {0};
        int numero_aleatorio = 0;


        cout << "Digite o número de vezes que o dado de 6 faces será lançado." << endl;
        cout << "Digite zero para sair:";
        cin >> numero_vezes;

        if(numero_vezes == 0) break;

        while(i < numero_vezes){
            //Variável que armazena o numero aleatório de 1 a 6
            numero_aleatorio = ((rand()%6)+1);

            cout << "O resultado da jogada nº " << (i + 1) <<" é: " << numero_aleatorio << endl;
            quantidade_cada_valor[numero_aleatorio - 1]++;
            i++;
        }

        cout << "A porcentagem de cada face jogada é:" << endl;

        for(i = 0; i<6; i++){
            if(quantidade_cada_valor[i] != 0){
                cout << (i + 1) << "\t ";
                cout << quantidade_cada_valor[i] << "\t " ;

                //Formatação do Número decimal
                cout.precision(4);
                //Continuação da formatação setw()
                cout << setw(1) << CalculaPorcentual(quantidade_cada_valor[i], numero_vezes) << "\n";
            }
        }
        cout << endl;
    }
    return 0;
}

