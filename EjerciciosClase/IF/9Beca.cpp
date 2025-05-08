#include <iostream>
using namespace std;

int main (){
    int average, faults;
    cout << "Please write down you current grade average: ";
    cin >> average;

    cout << "Please write down the amount of faults recieved: ";
    cin >> faults;

    if(85 <= average && faults < 3){
        cout << "You have successfully recieved a scholarship! Congratulations!!" << endl;
    }
    else{cout << "You can't aquire a scholarship since your data was unable to meet the criteria" << endl;}

    return 0;
}