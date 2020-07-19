#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool valorBoolean = true; /*en el video muestra dos lineas, probe hacerla en una sola y me funciono igual*/
    /*valorBoolean = true;*/

    int valorEntero = 15;
    double valorDouble = 20.99;
    string valorString = "¿Hola, como estan?"; /*¿por que muestra un caracter extraño si uso la apertura de interrogacion?*/
    char valorChar = 'B';

    cout << "valor Boolean: " << valorBoolean << endl;
    cout << "valor Entero: " << valorEntero << endl;
    cout << "Valor Double: " << valorDouble << endl;
    cout << "valor String: " << valorString << endl;
    cout << "valor char: " << valorChar << endl;

    return 0;
  
}