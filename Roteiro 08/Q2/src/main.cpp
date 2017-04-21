#include "../include/Imovel.h"
#include "../include/Endereco.h"
#include "../include/Terreno.h"
#include "../include/Casa.h"
#include "../include/Apartamento.h"

int main(){
    Casa casa1(Endereco("Logradouro1", "Bairro1","Cidade1", "08073245", 10),1,1,280.0,2000.0);
    Casa casa2(Endereco("Logradouro2", "Bairro2","Cidade2", "08013234", 11),2,3,400.0,250.0);

    Apartamento apartamento1(Endereco("Logradouro3", "Bairro3", "Cidade 3", "55480152", 152),2,500.00,"Nascente");
    Apartamento apartamento2(Endereco("Logradouro4", "Bairro4", "Cidade 4", "58080152", 1122),2,700.00,"Poente");
    
    Terreno terreno1(Endereco("Logradouro5","Bairro5","Cidade5","07322670",140), 5800.00);
    Terreno terreno2(Endereco("Logradouro6","Bairro6","Cidade6","07082670",132), 50900.00);
    
    Endereco teste = casa1.getEndereco();
    cout << teste.getLogradouro() << endl;
    
    
    Imovel* imobiliaria[6] = {&casa1, &apartamento1, &terreno1, &casa2, &apartamento2, &terreno2};

    //Testando GetEndereco
    Endereco CAS1 = imobiliaria[0]->getEndereco();
    cout << CAS1.getBairro() << endl;

    //Exibindo a Descrição dos imoveis
    cout << imobiliaria[0]->getDescricao() << endl;
    cout << imobiliaria[1]->getDescricao() << endl;
    cout << imobiliaria[2]->getDescricao() << endl;
    cout << imobiliaria[3]->getDescricao() << endl;
    cout << imobiliaria[4]->getDescricao() << endl;
    cout << imobiliaria[5]->getDescricao() << endl;    
}