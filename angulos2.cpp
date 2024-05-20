#include <iostream>
using namespace std;
int main()
{
    int angulo;

    cout << "Ingrese un angulo: \n";
    cin >> angulo;

   if (angulo<90)
   {
    cout << "Es un angulo agudo";
   }
   else if (angulo == 90);
   {
    cout << "Es un angulo recto";
   }
else { 
    cout << "Es un angulo obtuso";
    } 
    return 0;

}