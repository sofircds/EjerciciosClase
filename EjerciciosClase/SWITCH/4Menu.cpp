#include <iostream>
using namespace std;

int main (){
    int option;

    cout << "----------- Main Menu------------" << endl;
    cout << "| 1. Option                     |" << endl;
    cout << "| 2. Option                     |" << endl;
    cout << "| 3. Option                     |" << endl;
    cout << "| 4. Exit                       |" << endl;
    cout << "---------------------------------" << endl;

    cout << "Please insert the option of yor liking: ";
    cin >> option;

    switch (option){
        case 1: 
        cout << "You have chosen option 1" << endl;
        break;

        case 2: 
        cout << "You have chosen option 2" << endl;
        break;

        case 3: 
        cout << "You have chosen option 1" << endl;
        break;

        case 4:
        cout << "Closing the program...." << endl;
        return 0;
        break;

        default:
        cout << "Invalid option, please choose one from the menu" << endl;

    }
    return 0;
}
