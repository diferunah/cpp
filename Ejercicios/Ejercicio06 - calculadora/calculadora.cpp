#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	// Datos de entrada
	int a = 0; int b = 0;
	int suma; int resta; int multiplicar; int dividir;

	
	cout << "Ingrese el valor de a: ";
	cin >> a;
			
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	//Proceso
	suma = a + b;
	resta = a - b;
	multiplicar = a * b;
	dividir = a / b;
	
	cout << endl;
	
	//salida
	cout << "La suma de a + b es: " << suma << endl;
	cout << "La resta de a - b es: " << resta << endl;
	cout << "La multiplicacion de a * b es: " << multiplicar << endl;
	cout << "La division de a / b es: " << dividir << endl;
			
	return 0;
}
