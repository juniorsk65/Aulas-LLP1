#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual void sacar(double valor);
        virtual void depositar(double valor);
    protected:
    private:
};

#endif // ICONTA_H
