#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int addition, substraction, multiplication, pot, number;
    bool logic;
    float result, division;

    cout << "Please insert a number to operate: ";
    cin >> number;

    addition = (result = number + 10);
    substraction = (result = number - 5);
    multiplication = (result = number * 2);
    division = (result = number / 4);
    pot = (result = pow(number, 2) );
    logic = (number > 0) && ((number % 2) == 0);

    cout << "Your results will be presented:" << endl;
    cout << "Your addition is equal to: " << addition << endl;
    cout << "Your substraction is equal to: " << substraction << endl;
    cout << "Your multiplication is equal to: " << multiplication << endl;
    cout << "Your division is equal to: " << division << endl;
    cout << "Your number elevated to a potent is equal to: " << pot << endl;
    cout << "Your number checked logically is proven true (1) or false (0) as: " << logic << endl;

    cout << "Thank you for using this calculator" << endl;

     
      return 0;
    
}