#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento(double valor_ct, string nome_ct){
        setValorPagamento(valor_ct);
        setNomeDoFuncionario(nome_ct);
}

void Pagamento::setValorPagamento(double value){valorPagamento = value;}
void Pagamento::setNomeDoFuncionario(string nome){nomeDoFuncionario = nome;}

double Pagamento::getValorPagamento(){return valorPagamento;}
string Pagamento::getNomeDoFuncionario(){return nomeDoFuncionario;}

ControleDePagamento::ControleDePagamento(){

}

void ControleDePagamento::setPg(Pagamento pg[], int n){
    for(int i = 0; i < n; i++){
        pagamentos[indexer++] = pg[i];
    }
}
int main()
{
    ControleDePagamento a;
    Pagamento pg[2] = {Pagamento(1, string("Vinciius")), Pagamento(2, string("Luciano"))};
    a.setPg(pg, sizeof(pg)/sizeof(Pagamento));
    cout << a.pagamentos[1].getNomeDoFuncionario() << endl;
}
