#Programa para compilar arquivos C++, o padrão é g++
CXX=g++
#Flags do compilador
CXXFLAGS=-std=c++11
#Dependências
#DEPS = ControleDeGastos.h Despesas.h  

principal: MinhaEmpresa.cpp
	$(CXX) $(CXXFLAGS) Consultor.cpp Funcionario.cpp MinhaEmpresa.cpp  -o main
	./main

#Apaga os arquivos objetos da pasta
clear:
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
