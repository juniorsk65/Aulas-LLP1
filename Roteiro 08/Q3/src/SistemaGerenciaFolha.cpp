#include "../include/SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    //CONSTRUTOR
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int index){
    funcionarios[index] = func;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(int i){
    return funcionarios[i]->calcularSalario();
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double caixa;
    for(int i=0; i<3; i++){
        caixa += funcionarios[i]->calcularSalario(); 
    }
    return caixa;
}