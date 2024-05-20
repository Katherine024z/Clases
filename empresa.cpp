#include <iostream>
using namespace std;
int main()
{
    //Empresa que trabaja con motores

    int TipoMotor;

    cout <<"Bienvenido a la empresa,\nPor favor ingrese un numero:\n";
    cin >> TipoMotor;

    switch(TipoMotor)
    {
        case 0:
        cout << "No esta establecido un valor definido para el tipo de bomba\n";
        break;

        case 1:
        cout << "La bomba solicitada es una bomba de agua\n";
        break;

        case 2:
        cout << "La bomba solicitada es una bomba de gasolina\n";
        break;

        case 3:
        cout << "La bomba solicitada es una bomba de hormigon\n";
        break;

        case 4:
        cout << "La bomba solicitada es una bomba de pasta alimenticia\n";
        break;

        default:
        cout << "No existe un valor valido para el tipo de bomba solicitado\n";
        break;
    }
    return 0;
}