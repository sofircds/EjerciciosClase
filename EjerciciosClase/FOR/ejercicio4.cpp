#include <iostream>
using namespace std;

int main() {
    int N;

    // Paso 1: Pedir cantidad de números
    cout << "¿Cuantos numeros deseas ingresar? ";
    cin >> N;

    int arreglo[N]; // Arreglo de tamaño N

    // Paso 2: Leer los N números
    cout << "Ingresa " << N << " numeros:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> arreglo[i];
    }

    // Paso 3: Pedir el numero a buscar
    int buscado;
    cout << "Ingresa el numero que deseas buscar: ";
    cin >> buscado;

    // Paso 4: Buscar el número en el arreglo
    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (arreglo[i] == buscado) {
            encontrado = true;
            break; // Ya lo encontramos, salimos del bucle
        }
    }

    // Paso 5: Mostrar resultado
    if (encontrado) {
        cout << "El numero " << buscado << " SI esta en el arreglo." << endl;
    } else {
        cout << "El numero " << buscado << " NO esta en el arreglo." << endl;
    }

    return 0;
}