#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	// Datos de entrda
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
    char facturaExenta;
   
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout << "Ingrese descuento (0, 10, 15, 20) ";
    cin >> descuento;

    cout << "Es una factura exenta? S/N: ";
    cin >> facturaExenta;


    // Proceso
    calculoDescuento = (subtotal * descuento) / 100;
   
    if (facturaExenta == 's' || facturaExenta == 'S') {
        calculoImpuesto = 0;
    } else { 
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    }      
    total = subtotal - calculoDescuento + calculoImpuesto;  
    
    //calculoDescuento = (subtotal * descuento) / 100;
	//calculoImpuesto = (subtotal - calculoDescuento) * impuesto; 
    //total = subtotal - calculoDescuento + calculoImpuesto;

    // Salida
    cout << endl;
    cout << "Total a pagar es: " << total;
	
	return 0;
}
