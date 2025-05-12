#include <iostream>
using namespace std;

int main (){
    int velocity;
    string vehicle;


    cout << "Please insert your vehicle: ";
    cin >> vehicle;

    cout << "Please also insert your velocity: ";
    cin >> velocity;

    if(vehicle == "moto"  && velocity > 80){
        cout << "Your fee will be over $1000" << endl;
    }
    else if(vehicle == "kiasoul" && velocity > 90){
        cout << "Your fee will be over $1111" << endl;
    }
    else if(vehicle == "kiasoul" && velocity > 70 && velocity <=90){
        cout << "Your fee will be of $200" << endl;
    }
    else if(vehicle == "44" && velocity > 100){
        cout << "Your fee will be over $30000" << endl;
    }
    else if(vehicle == "44" && velocity > 80 && velocity < 99){
        cout << "Your fee will be of $1500" << endl;
    }
    else {
        cout << "Your information does not apply to our fee system, please try again" << endl;
    }
    return 0;
}