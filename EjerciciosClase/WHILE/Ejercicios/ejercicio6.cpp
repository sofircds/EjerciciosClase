#include <iostream>
using namespace std;

int main(){
    string contrasena = "corona21";
    string intento;

    cout << "Hola porfavor ingrese la contrasena: ";
    cin >> intento;

    while(intento != contrasena){
        cout << "Contrasena incorrecta, porfavor intentarlo de nuevo" << endl;
        cin >> intento;
    }

    cout << "Ingreso accedido..." << endl;

    return 0;
}