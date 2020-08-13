#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //declaracion del arreglo
    int numeros[5];
 
    //asignacion de valores a un arreglo unibidimensional
    numeros[0] = 10;
    numeros[1] = 7;
    numeros[2] = 9;
    numeros[4] = 15;

    //lectura de los valores de un arreglo unibimensional
    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;
    
    return 0;
}
