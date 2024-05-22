#include <iostream>
using namespace std;
int main()
{
    float promedio=0;
    float nota[6];

    for (float i=0; i<6; i++)
    {
        cout << "Ingrese sus notas "<< i+1<< "\n";
        cin >> nota[i<6];
        promedio = promedio + nota[i<6];
    }
    cout << promedio/6;
    return 0;
}