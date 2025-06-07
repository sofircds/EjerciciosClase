#include <iostream>
using namespace std;

int main(){

    int arr[5] = {22, 44, 34, 5, 1};
    int par = 0;
    int impar = 0;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";

        if (arr[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }

    }

    cout << "El arreglo tiene: " << par << " numeros pares" << endl;
    cout << "El arreglo tiene: " << impar << " numeros impares" << endl;

return 0;

}