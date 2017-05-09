#include "../include/TestaValidaNumero.h"

using namespace std;

int main(){
    TestaValidaNumero testa;

    try{
        testa.validaNumero(2340);
        testa.validaNumero(200);
        testa.validaNumero(10);
    }
    catch(ValorAcimaException& e){
        cout << e.what() << endl;
    }
    catch(ValorAbaixoException& e){
        cout << e.what() << endl;
    }
    catch(ValorMuitoAcimaException& e){
        cout << e.what() << endl;
    }
}
