#include <iostream>
using namespace std;
int main()
{
    //calcular factorial

    int num;
    int factorial = 1;

    cout << "Ingrese un numero entero\n";
    cin >> num;

    if(num < 0)
    {
        cout << "El factorial de un numero negativo no existe!\n";
    }
    else
    {
        while (num>0)
        {
        factorial = factorial * num;
        num--;
        }
        cout << factorial;
    }
    return 0;
}