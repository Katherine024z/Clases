#include <iostream>

using namespace std;

int main()
{
    int res , n;
    cout << "ingrese numero entero: ";
    cin >> n;
    res = n % 2;
    switch (res)
    {
        case 0:
        cout << n << " es par \n";
        break;

        case 1:
        cout << n << "es impar\n";
        break;

        default:
        cout << 'datos incorrectos\n';

    }
    return 0;
    }