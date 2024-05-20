#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /*piedra = 1
      papel  = 2
      tijera = 3*/
    
    int num;
    int a1;
    int a2;
    int a3;
    int b1;
    int b2;
    int b3;

    for(int i = 0; i<5; i ++)
    {
        cout << "Piedra, papel o tijera\n";
        cout << "Ingrese un numero";
        cin >> num;

        cout << 1 + rand()%3 << "";
        
    }  
    if (a1=b1)
    {
        cout << "Es empate";
    }

    return 0;
}