#include <iostream>

using namespace std;

int main() {
    const int N = 5; // Tamaño del arreglo
    int arr[N] = {12, 7, 20, 33, 6}; // Arreglo con valores predefinidos
    int pares = 0, impares = 0;
    
    cout << "Arreglo: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0) {
            pares++; // Contar números pares
        } else {
            impares++; // Contar números impares
        }
    }

    cout << "\nCantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
