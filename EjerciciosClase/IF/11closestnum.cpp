#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float num1, num2;
    const float reference = 100.0;

    cout << "Please insert the first number: ";
    cin >> num1;

    cout << "Please insert the second number: ";
    cin >> num2;

    float distance1 = fabs(num1 - reference);
    float distance2 = fabs(num2 - reference);

    if (distance1 < distance2){
        cout << num1 << " is closer to 100." << endl;
    }
    else if (distance2 < distance1){
        cout << num2 << " is closer to 100" << endl;
    }
    else{
        cout << "Both numbers are at the same distance to 100." << endl;
    }

return 0;

}