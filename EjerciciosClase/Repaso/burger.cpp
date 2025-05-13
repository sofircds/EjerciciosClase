#include <iostream>
using namespace std;

int main (){
    float billetera = 35, residuo;
    int menuMorning, menuLunch, option;

    cout << "--------------MENU---------------" << endl;
    cout << "1. Morning Menu" << endl;
    cout << "2. Lunch Menu" << endl;
    cout << "3. Exit" << endl;
    cout << "Hello, insert the option of your interest: ";
    cin >> option;

    switch(option){
        case 1:
        cout << "--------------MENU---------------" << endl;
        cout << "1. Brownie(2$)" << endl;
        cout << "2. Pancake(2.50$)" << endl;
        cout << "3. Waffle(3$)" << endl;
        cout << "Hello, insert the option of your interest: ";
        cin >> menuMorning;

        switch(menuMorning){
            case 1:
            cout << "You have chosen Brownie(2$)" << endl;
            residuo = (billetera - 2);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            case 2:
            cout << "You have chosen Pancake(2.50$)" << endl;
            residuo = (billetera - 2.50);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            case 3:
            cout << "You have chosen Waffle(3$)" << endl;
            residuo = (billetera - 3);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            default:
            cout << "Please insert a valid option" << endl;
            return 0;
           } return option;
        
        case 2:
        cout << "--------------MENU---------------" << endl;
        cout << "1. Burger(3.50$)" << endl;
        cout << "2. Salad(2$)" << endl;
        cout << "3. Fries(1.50$)" << endl;
        cout << "Hello, insert the option of your interest: ";
        cin >> menuLunch;

        switch(menuLunch){
            case 1:
            cout << "You have chosen Burger(3.50$)" << endl;
            residuo = (billetera - 3.50);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            case 2:
            cout << "You have chosen Salad(2$)" << endl;
            residuo = (billetera - 2);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            case 3:
            cout << "You have chosen Fries(1.50$)" << endl;
            residuo = (billetera - 1.50);
            cout << "Su saldo actual es de: " << residuo << endl;
            break;

            default:
            cout << "Please insert a valid option" << endl;
            return 0;
            break;}
        return option;

        case 3:
        cout << "Thank you for your time...." << endl;
        return 0;
        break;

        default:
        cout << "Please insert a valid option" << endl;
        return 0;
        break;


    }
    return 0;

}