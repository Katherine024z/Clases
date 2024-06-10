#include <iostream>  //Libreria son el conjunto de funciones
using namespace std;

//Funcion
int suma(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 + entero2);
    return resultado;
}
//Funcion2
int resta(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 - entero2);
    return resultado;
}
//Funcion3
int multiplicacion(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 * entero2);
    return resultado;
}
//Funcion4
int division(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 / entero2);
    return resultado;
}

int main()
{
    int n1, n2, respuesta=0, respuesta2=0, respuesta3=0, respuesta4;
    n1=8;
    n2=6;

    respuesta=suma (n1,n2);
    respuesta2=resta(n1,n2);
    respuesta3=multiplicacion(n1,n2);
    respuesta4=division (n1,n2);
    cout << "El valor de la suma es: "<<respuesta<<endl;
    cout << "El valor de la resta es: "<<respuesta2<<endl;
    cout << "El valor de la multiplicacion es: "<<respuesta3<<endl;
    cout << "El valor de la division es: "<<respuesta4<<endl;
    return 0;
}