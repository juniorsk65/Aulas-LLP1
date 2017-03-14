#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;

class Empregado
{
    public:
        Empregado(string n, string s, float val);
        //~Empregado();
        float GetSalario_Mens() { return Salario_Mens; }
        void SetSalario_Mens(float val);
        string GetNome() { return Nome; }
        void SetNome(string val) { Nome = val; }
        string GetSobrenome() { return Sobrenome; }
        void SetSobrenome(string val) { Sobrenome = val; }
        void Cadastro_Completo();
    protected:
    private:
        float Salario_Mens;
        string Nome;
        string Sobrenome;
};

#endif // EMPREGADO_H
