#include "../include/Funcionario.h"
#include "../include/Horista.h"
#include "../include/Assalariado.h"
#include "../include/Comissionado.h"
#include "../include/SistemaGerenciaFolha.h"
using namespace std;

int main(){
    SistemaGerenciaFolha gerente;

    gerente.setFuncionarios(new Assalariado(500.0), 0);
    gerente.setFuncionarios(new Comissionado(20, 0.10),1);
    gerente.setFuncionarios(new Horista(20.00,30),2);

    cout << setprecision(2);
    cout << "SOFTWARE DE GERENCIAMENTO FINANCEIRO(v1.0)\n" << endl;
    cout << "Salario do Assalariado: " << fixed << "\t" << gerente.consultaSalarioFuncionario(0) << endl;
    cout << "Salario do Comissionado: " << fixed << "\t" << gerente.consultaSalarioFuncionario(1) << endl;
    cout << "Salario do Horista" << fixed << "\t\t" << gerente.consultaSalarioFuncionario(2) << endl;
    cout << "Total da Folha: " << fixed << "\t\t" << gerente.calculaValorTotalFolha() << endl;
    
}