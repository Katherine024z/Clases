#include <iostream>
using namespace std;

int factorial (int n)
{
    int res;

    if (n==0)
    {
        res = 1;
    }
    else 
    {
        res = n*factorial(n-1);
    }
    return res;
}

int main()
{
    int n, res;
    cout << "Ingrese un numero entero";
    cin >> n;
    cout << "El factorial de "<<n<<" es: "<<res;
    return 0;
}




