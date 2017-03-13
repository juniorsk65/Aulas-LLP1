/*******
 * Nome:
 * Data:
 *
 * Resumo do código:
 3)	a)	Crie uma	classe chamada	Empregado que	possui	três	variáveis	de	instância	(atributos)	–
um	 primeiro nome,	 um	 sobrenome e	 um	 salario mensal.	 Forneça	 um	 construtor	 que
inicializa	as	três	variáveis	de	instância.	Forneça	também	um	método	 get e	 set para cada
atributo	da	classe.	Se	o	salario	mensal	não	for	positivo,	não	configura	esse	valor.
b)	Crie	uma	classe	EmpregadoTest com	um	método	main que	demonstra	as	capacidades
da	classe	Empregado.	Nessa	classe,	crie	dois	objetos	Empregado e	exiba	o	salario	anual de
cada	 (objeto)	 Empregado.	 Então	 dê	 para	 cada	 Empregado um	 aumento	 de	 10%	 e	 exiba
novamente	os	seus	salários anuais.
 *
 *
 *
 ********
 */

//Bibliotecas
#include <iostream>
#include "Empregado.h"
#include "EmpregadoTest.h"
#include <string>

using namespace std;

Empregado::Empregado(string n, string s, float val){
    SetNome(n);
    SetSobrenome(s);
    SetSalario_min(val);
}
        //~Empregado();
void Empregado::SetSalario_min(float val) {
    if (val >= 0)
        Salario_min = val;
    else
        Salario_min = 0;
}

void Empregado::Cadastro_Completo(){
    cout<<"O nome do funcionário é: " << Nome << " " << Sobrenome << " e recebe " <<Salario_min <<" por mês.";
}

int EmpregadoTest::main(){
    string n;
    string s;
    float d;

    cout << "Digite o nome do funcionário:" << endl;
    cin >> n;
    cout << "Digite o sobrenome:" << endl;
    cin >> s;
    cout << "Digite o salário minimo:" << endl;
    cin >> d;

    Empregado funcionario(n, s , d);
    Empregado funcionario2("João", "Pessoa" , 1585);
    funcionario.Cadastro_Completo();
}

int main()
{
    EmpregadoTest t;
    t.main();
}
