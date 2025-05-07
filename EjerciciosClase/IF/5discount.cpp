#include <iostream>
using namespace std;

int main (){
    
    float amount;
    cout << "Please provide the amount to spend: $";
    cin >> amount;

    if (amount > 100){
        cout << "With your discount applied you have to spend: $" << amount * 0.90 << endl;
    }
    else {cout << "Discount can't be applied to your amount."<< endl;}
    return 0;
}