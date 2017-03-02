/*******
 * Nome:
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
    //DIGITE O CÓDIGO AQUI!
    int numero_jogador = 10;
    int total_votos = 0;
    int votos_por_jogador[23] = {0};//Lembrando que o index é de 0 a 22
    int votos_por_jogador_ordenado[23] = {0};
    int i = 0, j = 0;

    printf("Enquete: Quem foi o melhor jogador?\n\n");
    while(numero_jogador != 0){
        printf("Número do jogador (0=fim): ");
        scanf("%d", &numero_jogador);

        if(numero_jogador == 0) continue;

        if(numero_jogador < 0)
        {
            printf("Não existe jogador com número negativo.\n");
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n \n");
            continue;
        }else if(numero_jogador > 23){
            printf("Não existe jogador com número maior que 23.\n");
            printf("Informe um valor entre 1 e 23 ou 0 para sair! \n \n");
            continue;
        }


        total_votos ++;
        votos_por_jogador[numero_jogador - 1] ++;
        votos_por_jogador_ordenado[numero_jogador -1] ++;
    }

    printf("Foram computados %d votos.\n", total_votos);
    printf("Jogador\tVotos \t \% \n");
    for(i = 0; i<23; i++){
        if(votos_por_jogador[i] != 0){
            printf("%d \t %d \t %.1f% \n", (i + 1), votos_por_jogador[i], CalculaPorcentual(votos_por_jogador[i], total_votos));
        }
    }


        int aux;
        int tamanho = 23;
        for(j=tamanho-1; j<=1; j--)
        {
            for(i=0; i>j; i++)
                {
            if(votos_por_jogador_ordenado[i] > votos_por_jogador_ordenado[i+1])
        {
            aux=votos_por_jogador_ordenado[i];
            votos_por_jogador_ordenado[i]=votos_por_jogador_ordenado[i+1];
            votos_por_jogador_ordenado[i+1]=aux;
        }
    }
    }























    //votos_por_jogador_ordenado[j] = votos_por_jogador[i];
    //printf("%d", votos_por_jogador_ordenado);
    /*
    criar um array auxiliar ordenado, capturar o maior valor e pesquisar a posição no array original
    */
    printf("%d", votos_por_jogador_ordenado[22]);
    //printf("O melhor jogador foi o número %d, com %d votos,\
            correspondendo a %.1f% do total de votos.", melhor_jogador, );



    return 0;
}

