#include <iostream>
using namespace std;
int main()
{
    //calcular factorial

    int num;

    cout << "Ingrese un numero entero\n";
    cin >> num;

    if(num < 0)
    {
        cout << "El factorial de un numero negativo no existe!\n";
    }
    else
    {
        int factorial = 1;
        for (int i = num; i >= 1; i--)
        factorial *= i; 
        cout << "El factorial de" << num<< "es"<< factorial;
        cout << endl;
    }
    return 0;
}