#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa{
    private:
        int idade, telefone;
        string nome;
    
    public:
        void setIdade(int num);
        int getIdade();
        
        void setTelefone(int tel);
        int getTelefone();

        void setNome(string nome_h);
        string getNome();
        //Construtor
        Pessoa(string nome_ctg);
        Pessoa(int idade_ct = 0, int telefone_ct = 0, string nome_ct =""); 
};

class CadastroDePessoa{
    public:
    void main();
};
#endif
