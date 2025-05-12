#include <iostream>
using namespace std;
 

main () {

    int choice, n, caseISSS, caseAFP;
    double ISSS = 0, AFP = 0, Renta, Total, result;

    cout << "Insert your salary: ";
    cin >> n;

    cout << "--------------Menu---------------" << endl;
    cout << "| 1. ISSS                       |" << endl;
    cout << "| 2. AFP                        |" << endl;
    cout << "| 3. Renta                      |" << endl;
    cout << "| 4. Total                      |" << endl;
    cout << "| 5. Salir                      |" << endl;
    cout << "---------------------------------" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    cout << "---------------------------------" << endl;

    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please select a number between 1 and 5." << endl;
        return 1;}


        if(n <= 1000){
            choice = 1;}
        else{cout << "We can't apply this to salaries over 1000" << endl;}

switch (caseISSS){
    case 1:
         result = n * 0.03; 
        cout << "Your total ISSS is of: " << result << endl;
        if(n > 30) {
            n = 30;
        }
        break;

    case 2:
        result = 0;
        break;}
        in   switch(caseAFP){
        case 1:
    }

}

return 0;}