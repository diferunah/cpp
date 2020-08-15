#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[5][5];
    int random = 0;
    int sumaTotal = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            random = rand() % 100 + 1;
            matriz[i][j] = random;
            cout << " [ " << matriz[i][j] << " ] ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j  < 5; j++)
        sumaTotal += matriz[i][j];
    }
    cout << endl;
    cout << "La suma de la matriz 5 X 5 es: " << sumaTotal;

    return 0;
}
