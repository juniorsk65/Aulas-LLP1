#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    //Criar restaurante e conjunto de mesas
}
void RestauranteCaseiro::adicionaAoPedido(int n_da_mesa ,Pedido p){
    //Verifica se o produto já existe na comanda
    //Se sim faça:
    // Adicione um valor no lugar certo
    //Se não:
    // Crie um novo campo em que ficará esse produto
    int k;

    for(k = 0; k < 10 ;k++){
        if(mesa[n_da_mesa].pedido[k].getDescricao() == p.getDescricao() && 
        mesa[n_da_mesa].pedido[k].getNumero() == p.getNumero() &&
        mesa[n_da_mesa].pedido[k].getPreco() == p.getPreco()  
        ){
            
            mesa[n_da_mesa].pedido[k].setQuantidade(mesa[n_da_mesa].pedido[k].getQuantidade() + 1); 
        }else{
        //Chama o adiciona mesa da classe MesaDeRestaurante
        //para ser acrescentado um pedido
           mesa[n_da_mesa].adicionaAoPedido(p);
        }

    }
}
double RestauranteCaseiro::calculaTotalRestaurante(){
    //Total das mesas
    //Total do restaurante
    int m_esa;
    double total_mesa, caixa;
    for(m_esa = 0; m_esa < 10; m_esa++){
        total_mesa = mesa[m_esa].calculaTotal();
        caixa = caixa + total_mesa;
        }

    return caixa;
}

int main()
{
    RestauranteCaseiro restaurante;
    //Cardápio
    Pedido pedi[10];
    pedi[0] = Pedido(1231, 2, 2.00, "Arroz");
    pedi[1] = Pedido(2536, 3, 3.00, "Feijao");
    pedi[2] = Pedido(3879, 3, 20.00, "Salada");
    pedi[3] = Pedido(9988,1, 40.00, "Lagosta");
    pedi[4] = Pedido(5533, 1, 18.00, "Coca");
    pedi[5] = Pedido(4142, 2, 50.00, "Picanha");
    //Fim Cardápio

    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    restaurante.mesa[2].adicionaAoPedido(pedi[2]);//Salada na mesa 2
    restaurante.mesa[1].adicionaAoPedido(pedi[5]);//Picanha na mesa 1
    
    cout.precision(2);//Precisa usar o fixed antes
    cout << restaurante.mesa[1].pedido[0].getDescricao() << endl;
    cout << restaurante.mesa[1].pedido[1].getDescricao() << endl;
    cout << restaurante.mesa[2].pedido[0].getDescricao() << endl;

    cout << fixed << restaurante.mesa[1].calculaTotal() << endl;
    restaurante.mesa[1].zeraPedidos(0);

    //Na Mesa 1 adiciona o pedido numero 5
    restaurante.adicionaAoPedido(1,pedi[5]);

    cout << restaurante.calculaTotalRestaurante() << endl;
    return 0;
}