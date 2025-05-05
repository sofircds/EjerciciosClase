#include <iostream>
using namespace std;
 

main () {

    int choice, n, result;
    double ISSS, AFP, Renta, Total;

    cout << "Insert your salary: ";
    cin >> n;

    cout << "---------------------------------" << endl;
    cout << "1. ISSS" << endl;
    cout << "2. AFP" << endl;
    cout << "3. Renta" << endl;
    cout << "4. Total" << endl;
    cout << "5. Salir" << endl;
    cout << "Enter your choice (1-5)  ";
    cin >> choice;
    cout << "---------------------------------" << endl;

    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please select a number between 1 and 5." << endl;
        return 1;
}

switch (choice) {
    case 1:
        result = n * 0.03;

}
return 0;}