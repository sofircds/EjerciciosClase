#include <iostream>
using namespace std;

int main(){

    int numero;
    cout << "Hola porfavor inserta un numero: ";
    cin >> numero;

    cout << "La suma de los primero 10 numeros naturales seran:" << endl;

    for (int i = 1; i < 11; i++){

        int result = numero + i;
        cout << numero << " + " << i << " = " << result << endl;
    }

    return 0;
}