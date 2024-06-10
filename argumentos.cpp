#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{//argc: lugar donde se almacena el ejecutable (nombre del programa)
 //argv: texto que se le agrega
    cout << "Argumentos de entrada: "<<argc<< "\n";
    for (int i=0; i<argc; i++)
    {
        cout << argv[i]<<"\n";
    }
    return 0;
}