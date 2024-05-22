#include <iostream>
using namespace std;
int main()
{
    int numero[100];
    numero[0]=1;
    cout << "Sumatoria de los numeros del 1 al 100\n";

    for (int i = 1; i<100; i++ )
    {
        cout << i++ << "\n";
    }
    return 0;
}