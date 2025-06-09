#include <iostream>
#include <cstring> // Biblioteca para manipulación de cadenas

using namespace std;

bool esPalindromo(const char palabra[]) {
    int longitud = strlen(palabra); // Obtener la longitud de la palabra
    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            return false; // Si hay alguna diferencia, no es palíndromo
        }
    }
    return true;
}

int main() {
    char palabra[50]; // Arreglo para almacenar la palabra

    cout << "Ingrese una palabra: ";
    cin >> palabra; // Capturar palabra del usuario

    if (esPalindromo(palabra)) {
        cout << "La palabra '" << palabra << "' es un palíndromo.\n";
    } else {
        cout << "La palabra '" << palabra << "' NO es un palíndromo.\n";
    }

    return 0;
}
