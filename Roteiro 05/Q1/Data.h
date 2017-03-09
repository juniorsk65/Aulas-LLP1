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
        Data();
        Data(int D, int M , int A);
        //~Data();
        bool avancarDia();

        bool setDia(int D);
        bool setMes(int M);
        bool setAno(int A);

        int getDia();
        int getMes();
        int getAno();
};

#endif // DATA_H
