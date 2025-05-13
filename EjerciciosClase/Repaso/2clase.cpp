#include <iostream>
using namespace std;

int main (){
float billetera = 3, restante, cobro;
int menuGlobal, menuManana, menuTarde, edad;

cout << "Hola porfavor inserta tu edad: ";
cin >> edad;

if(edad < 0 && edad >= 100){
cout << "Su edad no es valida/n" << endl;}

cout << "-----------MAC MENU-------------" << endl;
cout << "1. Menu de la mañana" << endl;
cout << "2. Menu de la tarde" << endl;
cout << "3. Menu de la noche" << endl;
cout << "4. Salir" << endl;
cout << "Hola que tal, que menu desea visualizar?: ";
cin >> menuGlobal;

switch(menuGlobal){
    case 1:
    cout << "-----------MAC MENU-------------" << endl;
    cout << "1. Muffin (3$)" << endl;
    cout << "2. Hotcake (4.75$)" << endl;
    cout << "3. Jugo (1.25$)" << endl;
    cout << "4. Papas (2$)" << endl;
    cout << "5. Cajita Feliz (1.40$)" << endl;
    cout << "Hola buenos dias en que le puedo ofrecer?: ";
    cin >> menuManana;
   
    switch(menuManana)
{
    case 1:
    cout << "Usted a seleccionado un Muffin(3$)" << endl;
    restante = (billetera - 3);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    case 2:
    cout << "Usted a seleccionado un Hotcake(4.65$)" << endl;
    restante = (billetera - 4.65);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    case 3:
    cout << "Usted a seleccionado un Jugo (1.25$)" << endl;
    restante = (billetera - 1.25);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

   case 4:
    cout << "Usted a seleccionado un Papas(2$)" << endl;
    restante = (billetera - 2);
    cout << "Su saldo actual es de: " << restante << endl;
    break; 

   case 5:
    cout << "Usted a seleccionado una cajita feliz(1.40$)" << endl;
    if (1 <= edad && edad <= 7){
    cout << "Puede comprar una caja feliz" << endl;
    }
    else if(edad >= 8 && edad <= 14){
    cout << "Se le cobrara el doble" << endl;
    cobro = 1.40 * 2;
    }
    else if(edad >= 15 && edad <= 18){
    cout << "Se le cobrara el triple" << endl;
    cobro = 1.40 * 3;
    }
    else{
        cout << "No puede comprarla, usted esta muy ruco" << endl;
        break;
    }
   if (billetera > cobro){
         cout << "Cajita feliz comprada por $" << cobro << endl;
         restante = billetera - cobro;
         cout << "Su saldo actual es de: " << restante << endl; }
    else {
    float falta = cobro - restante;
    cout << "No tiene suficiente dinero para la cajita feliz. Le faltan $" << falta << endl;}
    break;

    default:
    cout << "Por favor inserte un dato valido" << endl;
    return 0;
    break;
}
    
return menuGlobal;

    case 2:
    cout << "-----------MAC MENU-------------" << endl;
    cout << "1. BigMac (4.75$)" << endl;
    cout << "2. Ensalada (3.20$)" << endl;
    cout << "3. Soda (1.20$)" << endl;
    cout << "4. Papas (2$)" << endl;
    cout << "Hola buenos dias en que le puedo ofrecer?: ";
    cin >> menuTarde;

    switch(menuTarde){
         case 1:
    cout << "Usted a seleccionado una Bigmac(4.75$)" << endl;
    restante = (billetera - 4.75);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    case 2:
    cout << "Usted a seleccionado un Ensalada(3.20$)" << endl;
    restante = (billetera - 3.20);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    case 3:
    cout << "Usted a seleccionado un Soda(1.20$)" << endl;
    restante = (billetera - 1.20);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    case 4:
    cout << "Usted a seleccionado un Papas(2$)" << endl;
    restante = (billetera - 2);
    cout << "Su saldo actual es de: " << restante << endl;
    break;

    default:
    cout << "Por favor inserte un dato valido" << endl;
    return 0;
    break;
    }
    
    return menuGlobal;

    case 4:
    cout<< "Muchas gracias vuelva pronto....!" << endl;
    break;

    default:
    cout << "Por favor ingresar una opcion valida" << endl;

}

    return 0;
}