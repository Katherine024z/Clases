#include <iostream>

using namespace std;

int main()
{
    char opcion, variable = 'X';
    do
    {
        cout << " Menu " << "\n";
        cout << " A Carne asada "<< "\n";
        cout << " B Pollo "<< "\n";
        cout << " C Cerdo "<< "\n";
        cout <<" Seleccione una opcion: "<< "\n";
        cin >> opcion;
        cout << "opcion seleccionada "<< "\n";

    }
    while (opcion != variable);

    return 0;
}