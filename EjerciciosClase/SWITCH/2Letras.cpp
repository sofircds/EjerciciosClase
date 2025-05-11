#include <iostream>
using namespace std;

int main (){
    int grade;

    cout << "Please insert your grade: ";
    cin >> grade;

    if (grade < 0 || grade > 100){
        cout << "Please insert a valid grade" << endl;
        return 1;

    }
    switch(grade / 10 ){
        case 10: // Es el 100 que no se toma en cuenta.
        case 9:
        cout << "Grade: A" << endl;
        break;

        case 8:
        cout << "Grade: B" << endl;
        break;

        case 7:
        cout << "Grade: C" << endl;
        break;

        case 6:
        cout << "Grade: D" << endl;
        break;

        case 5:
        cout << "Grade: E" << endl;
        break;

        default:
        cout << "Grade: F" << endl;
        break;
    }

    return 0;
}