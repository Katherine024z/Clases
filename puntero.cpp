#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    /*Apuntador: un lugar donde esta almacenado el espacio de memoria de x(tal variable) 
    &: leer en direccion de memoria/ donde se guardara 
    Puntero: manejar la memoria
    *: mete en la memoria
    Ambito: donde se puede ver/existir un elemento
    Ambito global: declarar antes del main*/
    int x;
    int *apuntador=&x;  //Se crea un apuntador en la memoria
    cout << "Ingrese un numero entero: ";
    cin >> *apuntador; //Se almacena en memoria el dato

    delete[] apuntador; //Despues de operar con punteros
    apuntador = NULL;

    cout << "Usted ingreso el numero: "<<x<<"\n";
    return 0;
}