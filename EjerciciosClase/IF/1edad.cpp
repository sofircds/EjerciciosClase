#include <iostream>
using namespace std;

int main (){
    int age;

    cout << "Please insert you current age" << endl;
    cin >> age;

    if(age > 18){
        cout << "You are an adult" << endl;
    }
    else if (age < 18){
        cout << "You are underage" << endl;
    }
    
    return 0;

}