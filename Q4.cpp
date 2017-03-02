/*******
 * Nome:Lucas Nogueira Nobrega
 *      Luciano Junior
 * Data:
 *
 * Resumo do código:
 *
 *
 *
 ********
 */


//Bibliotecas
#include <iostream>
#include <iomanip>      // formatação do número decimal

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

using namespace std;

//Obs3: O programa deverá executar o cálculo do percentual de cada jogador através de
// uma função. Esta função receberá dois parâmetros: o número de votos de um jogador
// e o total de votos. A função calculará o percentual e retornará o valor calculado.
float CalculaPorcentual(int numero_de_votos, int total_de_votos){
    float porcentagem = 0.0;
    porcentagem = (float) numero_de_votos/(float) total_de_votos;
    return porcentagem*100;
}

int main()
{
    int numero_jogador = 10;
    int total_votos = 0;
    int votos_por_jogador[23] = {0};//Lembrando que o index é de 0 a 22
    int i = 0, j = 0;

    cout <<"Enquete: Quem foi o melhor jogador?\n\n";
    //LOOP para a entrada dos jogadores
    while(numero_jogador != 0){
        cout <<"Número do jogador (0=fim): ";
        cin >> numero_jogador;

        if(numero_jogador == 0) continue;

        if(numero_jogador < 0)
        {
            cout <<"Não existe jogador com número negativo.\n";
            cout <<"Informe um valor entre 1 e 23 ou 0 para sair!\n \n";
            continue;
        }else if(numero_jogador > 23){
            cout <<"Não existe jogador com número maior que 23.\n";
            cout <<"Informe um valor entre 1 e 23 ou 0 para sair! \n \n";
            continue;
        }
        total_votos ++;
        votos_por_jogador[numero_jogador - 1] ++;
    }
    //FIM DO LOOP

    //Imprime na tela os jogadores votados
    cout <<"Foram computados " << total_votos << " votos.\n";
    cout <<"Jogador\tVotos \t \% \n";
    for(i = 0; i<23; i++){
        if(votos_por_jogador[i] != 0){
            cout << (i + 1) << "\t";
            cout << votos_por_jogador[i] << "\t" ;
            //Formatação do Número decimal
            cout.precision(4);
            cout << setw(1) << CalculaPorcentual(votos_por_jogador[i], total_votos) << "\n";
        }
    }
    //FIM Imprime na tela os jogadores votados


     /*
    Captura o maior valor a posição no array original, armazena esse valor em maior_valor e index_maior_valor
    */
    int maior_valor = 0;
    int index_maior_valor = 0;
    for(i = 0;i<23; i++){
        if(votos_por_jogador[i]>maior_valor){
            maior_valor  = votos_por_jogador[i];
            index_maior_valor = i;
        }
    }

    /*
    for(i = 0; i<23; i++){
        cout << votos_por_jogador[i] << " ";
    }
    Somente para Debugging
    */


    cout << "\nO melhor jogador foi o número " << (index_maior_valor + 1) << ", com "<< maior_valor << " votos," <<
            "correspondendo a "<< CalculaPorcentual(votos_por_jogador[index_maior_valor], total_votos) <<"\% do total de votos.\n";



    return 0;
}

