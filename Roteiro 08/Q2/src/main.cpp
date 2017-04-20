#include "../include/Imovel.h"
#include "../include/Endereco.h"
#include "../include/Terreno.h"
#include "../include/Casa.h"
#include "../include/Apartamento.h"

int main(){
    Casa casa1(Endereco("Logradouro1", "Bairro1","Cidade1", "0807324", 1),1,1,2.0,2.0);
    Apartamento apartamento1(Endereco("Logradouro2", "Bairro2", "Cidade 2", "58080152", 12),2,500.00,"Nascente");
    Terreno terreno1(Endereco("Logradouro3","Bairro3","Cidade3","07082670",140), 500.00);
    Endereco teste = casa1.getEndereco();
    cout << teste.getLogradouro() << endl;


    cout << "CASA1 " << endl;
    cout << casa1.getDescricao() << endl;
    cout << apartamento1.getDescricao() << endl;
    cout << terreno1.getDescricao() << endl;
}