#include <iostream>
using namespace std;

int main (){

    int numero;
    cout << "Porfavor inserta un numero" << endl;
    cin >> numero;

    cout << "La tabla del 1 al 10 sera igual a: " << endl;

    for(int i = 1; i < 11; i++){

        int result = numero * i;

        cout << numero << " x " << i << " = " << result << endl;
    
    }


    return 0;
}