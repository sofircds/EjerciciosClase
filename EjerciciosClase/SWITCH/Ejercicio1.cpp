#include <iostream>
using namespace std;

int main() {
   
    int number;

    cout << "Write a number betweeen 1 and 7: ";
    cin >> number;
    
   
    switch (number){
        case 1:
             cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
    }
    return 0;
}
