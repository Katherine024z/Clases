#include <iostream> 
using namespace std;

double media(double num1, double num2) {
double media;
media = (num1 + num2)/2;
return media;
}

int main()
{
    int n1, n2, respuesta=0;
    n1=8;
    n2=6;

    respuesta=media(n1,n2);
    cout << "La media de los numeros es: "<<respuesta;
}
