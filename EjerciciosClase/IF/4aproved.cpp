#include <iostream>
using namespace std;

int main(){

    int grade;

    cout << "Please insert your current grade: ";
    cin >> grade;

    if (grade >= 60){
        cout << "Congratulations you aproved!" << endl;
    }
    else {
        cout << "Sadly, you failed, but keep trying!" << endl;
    }
    return 0;
}