#include <iostream>
using namespace std;

int main()
{
    float angulo1 = 0.00;
    float angulo2 = 0.00;
    float respuesta = 0.00;

    cout << "PROGRAMA PARA CALCULAR EL TERCER ANGULO DE UN TRIANGULO\n ";
    cout << "Ingrese el primer angulo: \n ";
    cin >> angulo1;

    cout << "Ingrese el segundo angulo: \n";
    cin >> angulo2;

    respuesta = 180 - (angulo1 + angulo2);

    cout << "El valor del tercer angulo es: \n"<< respuesta;

    return 0;

}