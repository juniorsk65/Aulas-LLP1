#include "Televisao.h"

using namespace std;

Televisao::Televisao(int _vol, int _canal)
{
    setVolume(_vol);
    setCanal(_canal);
}

void Televisao::setVolume(int vol)
{
    volume = vol;
}

void Televisao::setCanal(int cal)
{
    canal = cal;
}

int Televisao::getCanal() { return canal; }
int Televisao::getVolume() { return volume; }

void Televisao::sobeCanal()
{
    int c;

    cout << "Digite 1 para incrementar 1" << endl;
    cout << "OU" << endl;
    cout << "Digite o Canal" << endl;

    while (c <= 0 || c > 10)
    {
        cin >> c;
        cout << "Digite novamente" << endl;
        cout << "Digite maximo (0 - 10)" << endl;
    };
    canal = canal + c;
}

void Televisao::aumentaVolume()
{
    int v = 0;

    cout << "Digite 1 para aumentar" << endl;
    cout << "OU" << endl;
    cout << "Digite a quantidade" << endl;

    while (v <= 0 || v > 10)
    {
        cin >> v;
        cout << "Digite novamente" << endl;
        cout << "Digite maximo (0 - 10)" << endl;
    };
    volume = volume + v;
}

void Televisao::desceCanal()
{
    int c = 0;

    cout << "Digite 1 para diminuir" << endl;
    cout << "OU" << endl;
    cout << "Digite a quantidade" << endl;

    while (c <= 0 || c > 10)
    {
        cin >> c;
        cout << "Digite novamente" << endl;
        cout << "Digite maximo (0 - 10)" << endl;
    };
    canal = canal + c;
}

int main()
{
    Televisao tv(1, 1);

    cout << tv.getCanal() << endl;
    cout << tv.getVolume() << endl;

    tv.aumentaVolume();
    cout << tv.getVolume() << endl;
    return 0;
}