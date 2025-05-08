#include <iostream>
using namespace std;

int main (){

    string properuser = "many11";
    string properpasw = "3456";

    string username, password;

    cout << "Please write down your information" << endl;
    cout << "Provide a username: ";
    cin >> username;
    cout << "Provide a password: ";
    cin >> password;

    if(properuser == username && properpasw == password){
        cout << "Access Granted, Welcome Back!" << endl;
    }
    else{
        cout << "Access denied, Try again." << endl;
    }
return 0;

}