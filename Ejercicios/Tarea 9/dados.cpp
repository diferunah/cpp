#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dados()
{
    int numero = 0;
    srand(time(NULL));

    numero = rand() % 5 + 1;
    cout << "El Primer dado es: " << numero << endl;
    numero = rand() % 5 + 1;
    cout << "El Segundo dado es: " << numero << endl;
    
    return numero = 0;
}

int main(int argc, char const *argv[])
{
	cout << "lanzando dados, buena suerte!..." << endl << endl;
	dados();
	
			
	return 0;
}