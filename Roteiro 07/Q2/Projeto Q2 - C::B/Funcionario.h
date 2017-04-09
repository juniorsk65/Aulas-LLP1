#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        float GetSalario() { return Salario; }
        void SetSalario(float val) { Salario = val; }
        string GetNome() { return Nome; }
        void SetNome(string val) { Nome = val; }
        string GetMatricula() { return Matricula; }
        void SetMatricula(string val) { Matricula = val; }
    protected:
    private:
        float Salario;
        string Nome;
        string Matricula;
};

#endif // FUNCIONARIO_H
