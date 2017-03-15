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
#include "Despesas.h"
#include "ControleDeGastos.h"

using namespace std;

Despesas::Despesas(float val, string tipo_gasto)
{
    SetValor(val);
    SetTipoDeGasto(tipo_gasto);
}

void ControleDeGastos::setDespesas(double val, string tipo_gasto)
{
    despesas[contador] = Despesas(val, tipo_gasto);
    contador++;
}

double ControleDeGastos::calculaTotalDeDespesas(){

    double total;
    int i = 0;

    for(i = 0 ; i < contador; i++)
    {
        total += despesas[i].GetValor();
    }

    return total;

}

bool ControleDeGastos::existeDespesasDoTipo(string tipo){
    int i = 0;

    for(i = 0 ; i < contador; i++)
    {
        if (tipo.compare(despesas[i].GetTipoDeGasto()) == 1)
        {
            return true
        }
    }

    return false;
}



int main()
{
    ControleDeGastos auditoria{};

    float valor_temp;
    string tipo_gasto;
    int i = 0;
    double total;

    while(i < 100){
        cout << "Digite o valor do gasto:(0 para fim)" << endl;
        cin >> valor_temp;
        if (valor_temp == 0)break;
        cout << "Digite o tipo de gasto" << endl;
        cin >> tipo_gasto;
        i++;
        auditoria.setDespesas(valor_temp, tipo_gasto);
    }

    total = auditoria.calculaTotalDeDespesas;
    cout<<"O total de despesas é :" << total;


    return 0;
}

