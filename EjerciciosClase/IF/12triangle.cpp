#include <iostream>
using namespace std;

int main (){
    int side1, side2, side3;

    cout << "Write down the measurement for the first side: ";
    cin >> side1;

    cout << "Write down the measurement for the second side: ";
    cin >> side2;

    cout << "Write down the measurement for the third side: ";
    cin >> side3;

    if(side1 == side2 && side1 == side3 && side2 == side3){
        cout << "Your triangle is equilateral" << endl;
    }
    
    else if(side1 == side2 || side2 == side1 || side2 == side3){
        cout << "Your triangle is isosceles" << endl;
    }

    else if(side1 != side2 && side1 != side3 && side2 != side3){
        cout << "Your triangle is scalene" << endl;
    }
    
    return 0;
}