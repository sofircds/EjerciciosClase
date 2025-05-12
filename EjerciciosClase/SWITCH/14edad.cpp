#include <iostream>
using namespace std;

int main (){
    int age;

    cout << "Please intsert you age: ";
    cin >> age;

    if (0 <= age && age <= 9){
       age = 1;
    }
    else if(10 <= age && age <= 12){
        age = 2;
    }
    else if(13 <= age && age <= 17){
        age = 3;
    }
    else if(18 <= age){
        age = 4;
    }
    else {cout << "Please insert a valid number" << endl; }

    switch(age){
        case 1:
        cout << "Reccomended category is: G" << endl;
        break;

        case 2:
        cout << "Reccomended category is: PG" << endl;
        break;

        case 3:
        cout << "Reccomended category is: PG-13" << endl;
        break;

        case 4:
        cout << "Reccomended category is: R" << endl;
        break;
    }
return 0;

}