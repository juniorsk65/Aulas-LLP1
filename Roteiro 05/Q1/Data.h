#ifndef DATA_H
#define DATA_H
//Evitar dupla inclusão

class Data
{
    private:
        int dia;
        int mes;
        int ano;

    public:

        Data(){};
        Data(int D, int M , int A);

        void PrintDataCompleta();
        //~Data();
        void avancarDia();

        void setDia(int D);
        void setMes(int M);
        void setAno(int A);

        int getDia();
        int getMes();
        int getAno();

};

#endif// DATA_H
