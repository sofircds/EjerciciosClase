#include <iostream>
using namespace std;

int main (){
    int numeros[5];

    cout << "Ingrese 5 numeros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros ingresados: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Numero " << i + 1 << ": " << numeros[i] << endl;
    }

    return 0;
}