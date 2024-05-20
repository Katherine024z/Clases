#include <iostream>

using namespace std; 

int main()
{
    int res , n;
    cout << "ingrese numeros del 1 al 7: ";
    cin >> n;
    res = n ; 1-7; 
    switch (res)
    {
        case 1: 
        cout << 1 << "es lunes: ";
        break; 

        case 2:
        cout << 2 << "es martes: ";
        break;

        case 3:
        cout << 3 << "es miercoles: ";
        break;

        case 4:
        cout << 4 << "es jueves: ";
        break;

        case 5:
        cout << 5 << "es viernes: ";
        break;

        case 6: 
        cout << 6 << "es sabado: ";
        break;

        case 7:
        cout << 7 << "es domingo: ";
        break;

        default:
        cout << "opcion invalida"; 

    }

}