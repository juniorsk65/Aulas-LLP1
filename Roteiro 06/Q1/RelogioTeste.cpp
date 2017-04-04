#include <iostream>
#include "RelogioTeste.h"

using namespace std;

int RelogioTeste::main_test(){
    Relogio wasted_years;
    wasted_years.setHorario(23, 59, 59);

    cout << wasted_years.getHoras() << ":" << wasted_years.getMinutos() << ":" << wasted_years.getSegundos() << endl;
    wasted_years.avancarHorario();
    cout << wasted_years.getHoras() << ":" << wasted_years.getMinutos() << ":" << wasted_years.getSegundos() << endl;

    return 0;
}
