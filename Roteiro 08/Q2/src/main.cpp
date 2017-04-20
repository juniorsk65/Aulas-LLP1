#include "../include/Imovel.h"
#include "../include/Endereco.h"
#include "../include/Terreno.h"
#include "../include/Casa.h"
#include "../include/Apartamento.h"

int main(){
    Casa casa1(Endereco("LOGRADOURO", "2","2", "3", 1),1,1,2.0,2.0);
    Endereco teste = casa1.getEndereco();
    cout << teste.getLogradouro() << endl;
}