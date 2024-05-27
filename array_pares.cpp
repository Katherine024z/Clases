#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cout << "Ingrese tamaño de arreglo de numero:\n ";
    cin >> n;
    int num[n];
    int par [n];
    int i = 0;
   
    for(i = 0; i<n; i++ )
    {
     cout << "Ingrese un numero entero:\n ";
     cin >> num[i];

     if(num[i]%2 == 0)
     {
        par[i] = num[i];
        i++;
        cout << "El numero ingresado es:\n";
     }
     for (int i =0; i<n;i++)
     {
        cout << num[i]<< "\n";
        cout << "El arreglo de pares es: ";
     }
     for (int k=0; k<i; k++)
     {
        cout << par [i]<< "\n";
     }

    }    
    return 0;
}