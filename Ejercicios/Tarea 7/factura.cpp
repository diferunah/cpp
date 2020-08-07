#include <iostream>

using namespace std;

double subtotal;
string listaProductos;
double impuesto;
double total;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura ()
{
    system ("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto a pagar: " << impuesto << endl;
    cout << "Total a pagar: " << total;
    cout << endl << endl;
    system ("pause");


}