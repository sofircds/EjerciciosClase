#include <iostream>
using namespace std;

int main (){
    
    float temperature;

    cout << "Insert your current temperature in Celsius:  ";
    cin >> temperature;

    if(temperature < 15){
        cout << "The water is pretty cold!" << endl;
    }
    else if (15 <= temperature && temperature <= 25){
        cout << "Your temperature is nicely warm!" << endl;
    }
    else if(temperature > 25){
        cout << "Your temperature is too hot!" << endl;
    }
    return 0;
}