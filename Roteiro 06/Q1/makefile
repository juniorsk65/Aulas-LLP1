#Programa para compilar arquivos C++, o padrão é g++
CXX=g++
#Flags do compilador
CXXFLAGS=-std=c++11
#Dependências
#DEPS = ControleDeGastos.h Despesas.h  

principal: main.cpp
	$(CXX) $(CXXFLAGS) Relogio.cpp RelogioTeste.cpp main.cpp  -o main
	./main

#Apaga os arquivos objetos da pasta
limpar:
	rm -rf *.o

######################################
#Explicação
######################################
#regra: dependências 
# TAB comando  make 
# TAB comando
#
#criar:dependências 
# TAB comando  
# TAB comando
# 