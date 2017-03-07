#ifndef DATA_H
#define DATA_H
//Evitar dupla inclusão

class Data
{
    private:
        int data;
        int mes;
        int ano;

    public:
        Data();
        ~Data();

        bool setData();
        bool setMes();
        bool setAno();

        bool getDia();
        bool getMes();
        bool getAno();
};

#endif // DATA_H
