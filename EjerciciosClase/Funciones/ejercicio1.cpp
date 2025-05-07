#include <iostream>
using namespace std;

int main () {
    char letter;
    int grade;

    cout << "Insert your current grade" << endl;
    cin >> grade;

    if(grade >= 90){
        cout << "A" << endl;
        letter = 'A';
    }
    
    else if(grade < 90 && grade >= 85 ){
        cout << "B" << endl;
        letter = 'B'; 
    }

    else if(grade < 85 && grade >= 80 ){
        cout << "C" << endl;
        letter = 'C';
    }

    else if(grade < 80 && grade >= 70){
        cout << "D" << endl;
        letter = 'D';
    }

    else if(grade < 70 && grade >= 69){
        cout << "E" << endl;
        letter = 'E';
    }

    else if(grade < 69){
        cout << "F" << endl;
        letter = 'F';
    }

    switch(letter){

        case 'A':
        cout << "You are the goat!!" << endl;
        break;

        case 'B':
        cout << "Excellent!!" << endl;
        break;

        case 'C':
        cout << "Very good job!!" << endl;
        break;

        case 'D':
        cout << "Good job!" << endl;
        break;

        case 'E':
        cout << "Barely but still made it" << endl;
        break;

        case 'F':
        cout << "Remove the assignment" << endl;
        break;
    }
    
    return 0;
}