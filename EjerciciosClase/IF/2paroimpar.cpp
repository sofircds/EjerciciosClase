#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Please insert a number to verify" << endl;
    cin >> number;

    if(number % 2 == 0){
        cout << "The number: " << number << " is even" << endl;
    }
    else{
        cout << "The number: " << number << " is odd" << endl;
    }

    return 0;
}