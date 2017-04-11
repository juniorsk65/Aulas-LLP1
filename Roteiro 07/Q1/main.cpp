#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(){
    Triangulo tri("Triangulo",5, 3);
    Quadrado qua("Quadrado",2);
    Circulo cir("Circulo", 5);
    cout << tri.calcularArea() << endl;
    cout << qua.calcularArea() << endl;
    cout << cir.calcularArea() << endl;
}