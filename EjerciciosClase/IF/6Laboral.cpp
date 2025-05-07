#include <iostream>
using namespace std;

int main (){
    int number;

    cout << "Please insert a number between 1 and 7: ";
    cin >> number;

        if(number <= 5){
            cout << "This number corresponds to a week day" << endl;
        }
        else if (number == 6 && number == 7){
            cout << "This number corresponds to the weekend days" << endl;
        }
        else {cout << "Invalid number please try again" << endl;}

        return 0;

}