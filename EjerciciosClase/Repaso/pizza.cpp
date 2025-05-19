#include <iostream>
using namespace std;

int main()
{
    float billetera = 12, result, cobro;
    int menuPrincipal, menuDia, menuTarde, menuNoche, edad;


    cout << "Hola porfavor introduce tu edad: ";
    cin >> edad;

    if(edad < 0 && edad > 100){
        cout << "Porfavor inserte un dato valido" << endl;
        return 0;
    }

    cout << "------------------MENU------------------" << endl;
    cout << "1.MenuDia" << endl;
    cout << "2.MenuTarde" << endl;
    cout << "3.MenuNoche" << endl;
    cout << "4.Salir" << endl;
    cout << "Hola porfavor elige una de las opciones: ";
    cin >> menuPrincipal;

    switch (menuPrincipal)
    {
    case 1:
        cout << "------------------MENU------------------" << endl;
        cout << "1.Pancakes(3$)" << endl;
        cout << "2.Waffles(2.50$)" << endl;
        cout << "3.Jugo de naranja(4.00$)" << endl;
        cout << "4.Hashbrowns(1.50$)" << endl;
        cout << "Hola porfavor elige una de las opciones para el menu del dia: ";
        cin >> menuDia;

        switch (menuDia)
        {
        case 1:
            cout << "Usted ha elegido Pancakes(3$)" << endl;
            result = (billetera - 3);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 2:
            cout << "Usted ha elegido Waffles(2.50$)" << endl;
            result = (billetera - 2.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 3:
            cout << "Usted ha elegido Jugo de Naranja(4.00$)" << endl;
            result = (billetera - 4);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 4:
            cout << "Usted ha elegido Hashbrowns(1.50$)" << endl;
            result = (billetera - 1.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        default:
            cout << "Porfavor seleccione una opcion valida" << endl;
            return 0;
            break;
        }
        break;

    case 2:
        cout << "------------------MENU------------------" << endl;
        cout << "1.Pizza de Pepperoni(5$)" << endl;
        cout << "2.Hamburguesa(3.50$)" << endl;
        cout << "3.Jugo de mango(4.00$)" << endl;
        cout << "4.Nuditos(4.50$)" << endl;
        cout << "5.Cajita max(6.50$)" << endl;
        cout << "Hola porfavor elige una de las opciones para el menu del dia: ";
        cin >> menuTarde;

        switch (menuTarde)
        {
        case 1:
            cout << "Usted ha elegido Pepperoni(5$)" << endl;
            result = (billetera - 5);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 2:
            cout << "Usted ha elegido Hamburguesa(3.50$)" << endl;
            result = (billetera - 3.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 3:
            cout << "Usted ha elegido Jugo de Mango(4.00$)" << endl;
            result = (billetera - 4);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 4:
            cout << "Usted ha elegido Nuditos(4.50$)" << endl;
            result = (billetera - 4.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 5:
            if(edad >= 2 && edad <= 7){
                cout << "Usted puede comprar de la cajita max(6.50$)" << endl;
                result = (billetera - 6.50);
            }
            else if(edad >= 8 && edad <= 14){
                cout << "Se le cobrara el doble por la cajita max" << endl;
                cobro = 6.50*2;
                result = (billetera - cobro);
            }
            else{
                cout << "Su edad no es aplicable para la compra de este producto" << endl;
                return 0;
            }

            if (billetera > cobro){
                cout << "Usted tiene suficiente para comprarlo le quedara en:$ " << result;
            }
            else{
                float falta = cobro - result;
                cout << "No tiene suficiente para comprarla, le faltan: $ " << falta << endl; 
                return 0;
            }
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        default:
            cout << "Porfavor seleccione una opcion valida" << endl;
            return 0;
            break;
        }
        return menuPrincipal;

    case 3:
        cout << "------------------MENU------------------" << endl;
        cout << "1.Pasta Ravioli(7.50$)" << endl;
        cout << "2.Ensalada(4.50$)" << endl;
        cout << "3.Limonada(3.00$)" << endl;
        cout << "4.Flan(2.50$)" << endl;
        cout << "Hola porfavor elige una de las opciones para el menu del dia: ";
        cin >> menuNoche;

        switch (menuNoche)
        {
        case 1:
            cout << "Usted ha elegido Pasta Ravioli(7.50$)" << endl;
            result = (billetera - 7.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 2:
            cout << "Usted ha elegido Ensalada(4.50$)" << endl;
            result = (billetera - 4.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 3:
            cout << "Usted ha elegido Limonada(3.00$)" << endl;
            result = (billetera - 3);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        case 4:
            cout << "Usted ha elegido Flan(2.50$)" << endl;
            result = (billetera - 2.50);
            cout << "Su balance final sera de: $ " << result << endl;
            break;

        default:
            cout << "Porfavor seleccione una opcion valida" << endl;
            return 0;
            break;
        }
        return menuPrincipal;

    case 4:
        cout << "Muchas gracias por su tiempo...." << endl;
        return 0;

    default:
        cout << "Porfavor ingrese una opcion valida" << endl;
        return 0;
        break;
    }
    return 0;
}