#include <iostream>
using namespace std;

// Función que suma dos números enteros, conocido como prototipo.
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 7;
    cout << "La suma es: " << suma(num1, num2) << endl;
    return 0;
}