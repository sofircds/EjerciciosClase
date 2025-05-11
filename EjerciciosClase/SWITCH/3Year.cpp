#include <iostream>
using namespace std;

int main (){
    int number;

    cout << "Please insert a number between 1 and 12: ";
    cin >> number;

    if(number < 1 || number > 12){
        cout << "Please insert a number in the requested range" << endl;
    }

    switch(number){
        case 1:
        cout << "The respective month is January" << endl;
        break;

        case 2:
        cout << "The respective month is February" << endl;
        break;

        case 3:
        cout << "The respective month is March" << endl;
        break;

        case 4:
        cout << "The respective month is April" << endl;
        break;

        case 5:
        cout << "The respective month is May" << endl;
         break;

         case 6:
         cout << "The respective month is June" << endl;
         break;

        case 7:
        cout << "The respective month is July" << endl;
        break;

        case 8:
        cout << "The respective month is August" << endl;
        break;

        case 9:
        cout << "The respective month is September" << endl;
        break;

        case 10:
        cout << "The respective month is October" << endl;
        break;

        case 11:
        cout << "The respective month is November" << endl;
        break;

        case 12:
        cout << "The respective month is December" << endl;
        break;
}
return 0;
}