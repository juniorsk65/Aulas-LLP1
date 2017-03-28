#include <iostream>
#include "Relogio.h"

using namespace std;

int Relogio::getHoras(){return horas;};
int Relogio::getMinutos(){return minutos;};
int Relogio::getSegundos(){return segundos;};

bool Relogio::setHorario(int h;  int m; int s;){
    if(0 < h && h < 23 && 0 < m && m < 59 && 0 < s && s < 59)
    {
        horas = h;
        minutos = m;
        segundos = s;
        return true;
    }
    return false;
}

void Relogio::avancarHorario(){
    segundo++;
    if(segundo == 60){
        segundo = 0;
        minuto ++;
        if (minuto == 60){
            minuto = 0;
            hora++;
            if(hora == 24){
                hora = 0;
            }
        }
    }
}
