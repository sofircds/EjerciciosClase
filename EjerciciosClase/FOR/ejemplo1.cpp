#include <iostream>
using namespace std;

int main (){
    int numeros [5] = {1, 2, 3, 4, 5};

    cout << "Contenido del arreglo:" << endl;

    for (int i = 5; i >=0 ; i--)
    { 
        cout << "Elemento en la posicion " << i << ": " << numeros[i] << endl;
    }

    return 0;
}