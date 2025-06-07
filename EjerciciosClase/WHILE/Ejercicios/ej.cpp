#include <iostream>
using namespace std;

int main(){

    int numeroSecreto = 34;
    int intentos = 5;
    int intentoUsuario;

    cout << "Hola, bienvenido al juego de adivinanza" << endl;
    cout << "Tiene: " << intentos << " para adivinar" << endl;



    while(intentos > 0){
        
    cout << "Porfavor inserte su intento: ";
    cin >> intentoUsuario;

        if(intentoUsuario == numeroSecreto){
            cout << "Felicidades, has adivinado el numero!" << endl;
        }
        else if (intentoUsuario < numeroSecreto){
            cout << "Incorrecto, su numero es muy pequeno" << endl;
        }
        else{
            cout << "Incorrecto, su numero es muy alto" << endl;
        }
        intentos--;
        if(intentos > 0){
        cout << "Le quedan: " << intentos << endl;
        }
        else{
        cout << "Usted ya no tiene intentos restantes, el numero secreto era: " << numeroSecreto << endl;
        }
   
    }

return 0;

}