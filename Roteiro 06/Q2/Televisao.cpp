#include "Televisao.h"

using namespace std;

Televisao::Televisao(int _vol, int _canal)
{
    setVolume(_vol);
    setCanal(_canal);
}

void Televisao::setVolume(int vol)
{
    int v = 0;
    if(v+vol >= 20 )
    {
        cout << "\nNumero maximo 20" << endl;
        volume = 20;
    }
    else {volume = vol;}
}

void Televisao::setCanal(int cal)
{
    int c = 0;
    if(c+cal >= 20)
    {
        cout << "\nNumero maximo de 60 canais" << endl;
        canal = 20;
    }
    else {canal = cal;}
}

int Televisao::getCanal() { return canal; }
int Televisao::getVolume() { return volume; }

void Televisao::sobeCanal()
{
    int c = 0;

    cout << "\nCANAL" << endl;
    cout << "\nDigite 1 para incrementar" << endl;
    cout << "OU" << endl;
    cout << "Digite o Canal" << endl;
    cin >> c;

    while (c <= 0 || c >= 21)
    {
        cout << "\nDigite novamente" << endl;
        cout << "Maximo (0 - 20)" << endl;
        cin >> c;
    };
    canal = canal + c;
}

void Televisao::desceCanal()
{
    int c = 0;

    cout << "\nCANAL" << endl;
    cout << "\nDigite 1 para diminuir" << endl;
    cout << "OU" << endl;
    cout << "Digite a quantidade" << endl;
    cin >> c;
    while (c <= 0 || c >= 21)
    {
        cout << "\nDigite novamente" << endl;
        cout << "Maximo (0 - 20)" << endl;
        cin >> c;
    };
    canal = canal - c;
}

void Televisao::aumentaVolume()
{
    int v = 0;

    cout << "\nVOLUME" << endl;
    cout << "\nDigite 1 para aumentar" << endl;
    cout << "OU" << endl;
    cout << "Digite a quantidade" << endl;
    cin >> v;

    while (v <= 0 || v >= 11)
    {
        cout << "\nDigite novamente" << endl;
        cout << "Maximo (0 - 10)" << endl;
        cin >> v;
    };
    volume = volume + v;
}

void Televisao::diminuiVolume()
{
    int v = 0;

    cout << "\nVOLUME" << endl;
    cout << "\nDigite 1 para diminuir" << endl;
    cout << "OU" << endl;
    cout << "Digite a quantidade" << endl;
    cin >> v;

    while (v <= 0 || v >= 11)
    {
        cout << "\nDigite novamente" << endl;
        cout << "Maximo (0 - 10)" << endl;
        cin >> v;
    };
    canal = canal - v;
}

void Televisao::Volume(){
    cout << "Aumentar - Tecle 1" << endl;
    cout << "Diminuir - Tecle 2" << endl;
}

void Televisao::Canal(){
    cout << "Aumentar - Tecle 1" << endl;
    cout << "Diminuir - Tecle 2" << endl;
}

void Televisao::TV(){
    int opcao;
    cout << "Alterar Canal - Tecle 1" << endl;
    cout << "Alterar Volume - Tecle 2" << endl;
}