#include <iostream>
using namespace std;

int main () {
    float monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7;


    cout << "Write a number betweeen 1 to 7: "<< endl;
    cin << 1;
    
    monday = 1;
    tuesday = 2;
    wednesday = 3;
    thursday = 4;
    friday = 5;
    saturday = 6;
    sunday = 7;

    switch (day){
        case 1:
            cout << 1 << "monday";
            break;
        case 2:
            cout << 2 << "tuesday"
            break;
        case 3:
            cout << 3 << "wednesday"
            break;
        case 4:
            cout << 4 << "thursday"
            break;
        case 5:
            cout << 5 << "friday"
            break;
        case 6:
            cout << 6 << "saturday"
            break;
        case 7:
            cout << 7 << "tuesday"
            break;
    }
    return 0;
}


