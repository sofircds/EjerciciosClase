#include <iostream>
using namespace std;

int main (){

    int num1, num2;

    cout << "Please insert the first number" << endl;
    cin >> num1;

    cout << "Please insert the second number" << endl;
    cin >> num2;

    if (num1 > num2){
        cout << num1 << " is bigger than " << num2 << endl;
    }
    else if (num1 < num2){
        cout << num1 << " is smaller than " << num2 << endl;

    }
    else {
        cout << "They are equally the same" << endl;
    }
    return 0;
}