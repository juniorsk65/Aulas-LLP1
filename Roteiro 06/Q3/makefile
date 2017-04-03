#main: RestauranteCaseiro.cpp
#	g++ -std=c++11 Pedido.cpp MesaDeRestaurante.cpp RestauranteCaseiro.cpp -o RestauranteCaseiro
#	echo
#	./RestauranteCaseiro 

principal: main.cpp
	g++ -std=c++11 Pedido.cpp MesaDeRestaurante.cpp RestauranteCaseiro.cpp main.cpp -o main
	echo " "
	./main
	
clear:
	rm -rf *.o
#Quando utilizar este makefile, lembrar de setar como principal. Caso contrario o compilador não ira reconhecer as alterações!
#Não pode usar "main:" ,pois o make reconhece que este arquivo não foi modificado e não compila. Mesmo quando alguma de suas bibliotecas
#são modificadas.
