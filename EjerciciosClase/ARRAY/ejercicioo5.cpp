#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> N;

    int arr[N]; // Declaración del arreglo
    int pares = 0, impares = 0;

    cout << "Ingrese " << N << " números:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // Llenar el arreglo
        if (arr[i] % 2 == 0) {
            pares++; // Contar números pares
        } else {
            impares++; // Contar números impares
        }
    }

    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
