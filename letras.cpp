#include <iostream>
using namespace std;

int main()
{
    // Ingrese letra que defina un color

    char letra;
    cout << "Ingrese una letra que defina un color:\n R-Rojo\n Y-Amarillo\n B-Azul\n W-Blanco\n K-Negro\n C-Cian\n G-Verde "<<endl;
    cin >> letra;

    switch (letra)
    {
        case 'R':
        cout << "El color seleccionado es Rojo ";
        break;

        case 'Y':
        cout << "El color seleccionado es Amarillo";
        break;

        case 'B':
        cout << "El color seleccionado es Azul ";
        break;

        case 'W':
        cout << "El color seleccionado es Blanco ";
        break;

        case 'K':
        cout << "El color seleccionado es Negro ";
        break;

        case 'C':
        cout << "El color seleccionado es Cian ";
        break;

        case 'G':
        cout << "El color seleccionado es Verde ";
        break;

        default:
        cout << "Seleccion invalida";
        break;

    }
    return 0;
}