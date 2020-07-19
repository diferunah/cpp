#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de entrada
    int a = 50; int b = 10; int c = 7;

    // Proceso 1
    /*if (a > b && a > c) 
    {   
        cout << "a es el mayor: " << a;
    } 
    else if (b > a && b > c)
    {
        cout << "b es el mayor: " << b;
    }
    else
    {
        cout << "c es el mayor: " << c;
    }*/
    
    // Proceso 2
    if (a > b && a > c)
    { 
        cout << "a es el mayor :" << a;
    }
    if (b > a && b > c)
    {
        cout << "b es el mayor: " << b;
    }
    if (c > a && c > b)
    {
        cout << "c es el mayor: " << c;
    }
    return 0;
}
