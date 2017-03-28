#include <iostream>
#include "Relogio.h"

using namespace std;

int Relogio::getHoras(){return horas;};
int Relogio::getMinutos(){return minutos;};
int Relogio::getSegundos(){return segundos;};

bool Relogio::setHorario(int h,  int m, int s){
    if(0 <= h && h <= 23 && 0 <= m && m <= 59 && 0 <= s && s <= 59)
    {
        horas = h;
        minutos = m;
        segundos = s;
        return true;
    }
    return false;
}

void Relogio::avancarHorario(){
    segundos++;
    if(segundos == 60){
        segundos = 0;
        minutos ++;
        if (minutos == 60){
            minutos = 0;
            horas++;
            if(horas == 24){
                horas = 0;
            }
        }
    }
}

int main(){
    Relogio analog;
    analog.setHorario(23, 59, 59);

    cout << analog.getHoras();
    cout << analog.getMinutos();
    cout << analog.getSegundos() << endl;
    analog.avancarHorario();
    cout << analog.getHoras();
    cout << analog.getMinutos();
    cout << analog.getSegundos();


}
