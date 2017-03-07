#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num, aux, passou, i, cont = 0, lista[] = {0};
    cout << "Vamos achar o maior número, quando decidir parar basta digitar 0. \n" << endl;
    cout << "Digite um numero" <<endl;
    cin >> num;
    
    //Enquanto o numero inserido for diferente de 0, continue
    while(num != 0){
        lista[cont] = num;
        cout << "Digite outro numero" << endl;
        cin >> num;
        cont++;
    };//Fim  while
    //Metodo da bolha de ordenação.
    for(passou = 1; passou < cont; passou++)
    {
        for(i = 0; i < cont - 1; i++)
        {   //Verificando qual é maior
            if(lista[i] < lista[i+1])
            {
                aux = lista[i];
                lista[i] = lista[i + 1];
                lista[i + 1] = aux;
            }
        }//Fim contador array
    }//Fim Passou
    cout << "\nVoce decidiu sair" << endl;
    cout << "\nO maior numero digitado foi: " << lista[0] << endl;
    cout << "\nObrigado, Tchau" << endl;
} //Fim Main
