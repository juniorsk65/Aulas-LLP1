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
    SetSalario_Mens(val);
}
        //~Empregado();
void Empregado::SetSalario_Mens(float val) {
    if (val >= 0)
        Salario_Mens = val;
    else
        Salario_Mens = 0;
}

void Empregado::Cadastro_Completo(){
    cout<<"O nome do funcionário é " << Nome << " " << Sobrenome << " e recebe " <<Salario_Mens <<" por mês." << endl;
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
    funcionario2.Cadastro_Completo();

    float valor_anual;

    valor_anual = 12*funcionario.GetSalario_Mens();

    float valor_anual2;

    valor_anual2 = 12*funcionario2.GetSalario_Mens();

    cout << "Valor anual do "<< funcionario.GetNome() <<" é igual a " << valor_anual << endl;
    cout << "Valor anual do "<< funcionario2.GetNome() <<" é igual a " << valor_anual2 << endl;

    funcionario.SetSalario_Mens(1.1*funcionario.GetSalario_Mens());
    funcionario2.SetSalario_Mens(1.1*funcionario2.GetSalario_Mens());

    funcionario.Cadastro_Completo();
    funcionario2.Cadastro_Completo();
}

int main()
{
    EmpregadoTest t;
    t.main();
}
