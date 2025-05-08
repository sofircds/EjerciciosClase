#include <iostream>
using namespace std;

int main (){
    int weight;

    cout << "Please write down the weight of your package: ";
    cin >> weight;
    cout << "The inserted weight is of: " << weight << "kg" << endl;

    if(weight <= 5){
        cout << "Your payment is of $5" << endl;
    }
    else if(6 <= weight && weight <= 10){
        cout << "Your payment will be of $10" << endl;
    }
    else if (weight > 10){
        cout << "Your payment will be of $15" << endl;
    }

    return 0;
}