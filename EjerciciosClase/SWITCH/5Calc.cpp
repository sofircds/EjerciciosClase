#include <iostream>
using namespace std;

int main (){
    int option;
    float result, num1, num2;


    cout << "Please insert the first number: ";
    cin >> num1;

    cout << "Please insert the second number: ";
    cin >> num2;

    cout << "1. Addition" << endl;
    cout << "2. Multiplication" << endl;
    cout << "3. Substraction" << endl;
    cout << "4. Division" << endl;

    cout << "Please choose an option: ";
    cin >> option;

    switch(option){
        case 1: 
        result = num1 + num2;
        cout << "Your result is: " << result << endl;
        break;

        case 2: 
        result = num1 * num2;
        cout << "Your result is: " << result << endl;
        break;

        case 3: 
        result = num1 - num2;
        cout << "Your result is: " << result << endl;
        break;

        case 4: 
        result = num1 / num2;
        cout << "Your result is: " << result << endl;
        break;

        default:
        cout << "Please insert a valid number" << endl;
        return 0;
        break;

    }
    return 0;
}