#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /*piedra = 1
      papel  = 2
      tijera = 3*/
    
    int num;
    int i = 1;
    int maquina;


    while( i<=3)
    {

        cout << "1.Piedra, 2. papel o 3. tijera\n";
        cout << "Ingrese un numero";
        cin >> num;

        maquina = 1+rand()%3;
        if (num == maquina)
        {
            cout << "Es empate\n";
        }else if (num == 2 && maquina == 1|| num == 3 && maquina == 2)
        {
            cout << "Gana usuario\n";
        }else (num == 1 && maquina == 2|| num == 2 && maquina == 3);
        {
            cout << "Gana maquina\n";
            }
      i ++;  
    }
    return 0;
}