#include <iostream> 
#include <stdlib.h> //rand e srand
#include <time.h> //time

using namespace std;

int main()
{
    int nSecreto, nChute;
    
    //Inicia o sorteio
    srand (time(NULL));

    //Gera um numero aleatorio de 0 a 100
    nSecreto = rand() %100 + 1;
    cout << "VAMOS ADIVINHAR UM NUMERO \n" 
            "O numero procurado esta entre 0 e 100" <<endl;
    do{
        cout << "\nTente um numero" << endl;
        cin >> nChute;
        if(nSecreto < nChute)
        cout << "Muito alto, tente novamente" << endl;
        if(nSecreto > nChute)
        cout << "Muito baixo, tente novamente" << endl;
    }while(nSecreto != nChute);

    cout << "\nPARABENS VOCE ACERTOU!!!" << endl;
}
