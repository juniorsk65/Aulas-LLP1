#include "../include/Funcionario.h"
#include "../include/Horista.h"
#include "../include/Assalariado.h"
#include "../include/Comissionado.h"
#include "../include/SistemaGerenciaFolha.h"
using namespace std;

int main(){
    SistemaGerenciaFolha gerente;

    gerente.setFuncionarios(new Assalariado("Carlos", 13124,500.0), 0);
    gerente.setFuncionarios(new Comissionado("Pedro", 11232, 20, 0.10),1);
    gerente.setFuncionarios(new Horista("Jota", 22315,50,30),2);

    cout << setprecision(2);
    cout << "SOFTWARE DE GERENCIAMENTO FINANCEIRO(v1.0)\n" << endl;
    cout << "Salario do " << gerente.funcionarios[0]->getNome() << " (Assalariado)" << fixed << "\t\tR$" << gerente.consultaSalarioFuncionario(0) << endl;
    cout << "Salario do " << gerente.funcionarios[0]->getNome() << " (Comissionado)" << fixed << "\tR$" << gerente.consultaSalarioFuncionario(1) << endl;
    cout << "Salario do " << gerente.funcionarios[2]->getNome() << " (Horista)" << fixed << "\t\tR$" << gerente.consultaSalarioFuncionario(2) << endl;
    cout << "\nTotal da Folha: " << fixed << "\t\t\tR$" << gerente.calculaValorTotalFolha() << endl;
    
}