#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 35;
    int intentos = 5;
    int intentoUsuario;

    cout << "Bienvenido al juego de adivinanza!"<< endl;
    cout << "Tienes " << intentos << " intentos para adivinar un número entre 1 y 50."<< endl;

    while (intentos > 0) {
        cout << "Introduce tu intento: ";
        cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            cout << "Felicidades! Has adivinado el numero."<< endl;
            break;
        } else if (intentoUsuario < numeroSecreto) {
            cout << "El numero es mayor. Intentalo de nuevo."<< endl;
        } else {
            cout << "El numero es menor. Intentalo de nuevo." << endl;
        }

        intentos--;
        if (intentos > 0) {
            cout << "Te quedan " << intentos << " intentos" << endl;
        } else {
            cout << "Lo siento, se te acabaron los intentos. El numero era " << numeroSecreto << endl;
        }
    }

    return 0;
}
