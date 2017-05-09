#include "../include/SistemaGerenciaFolha.h"
#include "../include/FuncionarioNaoExisteException.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    //CONSTRUTOR
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int index){
    funcionarios[index] = func;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(int i){
//(b)	 Considerando	 a	 classe	 SistemaGerenciaFolha,	 reescreva	 o	 método
//consultaSalarioFuncionario().	 Ele	 deve	 lançar	 uma	 exceção	 do	 tipo
//FuncionarioNaoExisteException,	 quando	 o	 funcionário	 não	 estiver	 cadastrado	 no
//sistema.

//como eu sei se o funcionario existe ou não?
//percorrer o array de func vendo se o nome faz sentido
    for(int j = 0;j < 3;j++ ){
        if(funcionarios[j]->getMatricula() == i){
            return funcionarios[j]->calcularSalario();
        }
    }
    throw FuncionarioNaoExisteException();
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double caixa;
    for(int i=0; i<3; i++){
        caixa += funcionarios[i]->calcularSalario();
    }
    return caixa;
}
