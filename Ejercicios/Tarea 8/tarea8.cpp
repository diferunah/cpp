#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float x = 0;
    float resultado = 0;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    resultado = (sqrt (x));

    cout << endl;
    cout << "La raiz cudrada de " << x << " es: " << resultado;

    return 0;
}
