#include <iostream>
#include "factura.h"

using namespace std;

//extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Latte" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L30.00", 1, 30);
            break;        
        case 3:
            agregarProducto("1 Latte - L35.00", 1, 35);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Te frio" << endl;
        cout << "2 - Granita de cafe" << endl;
        cout << "3 - Capuccino supreme" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Te frio - L 25.00", 1, 25);
            break;
        case 2:
            agregarProducto("1 Granita de cafe - L35.00", 1, 35);
            break;        
        case 3:
            agregarProducto("1 Latte - L45.00", 1, 45);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Pie de limon" << endl;
        cout << "2 - Galleta de coco" << endl;
        cout << "3 - Tres leches" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Pie de limon - L 70.00", 1, 70);
            break;
        case 2:
            agregarProducto("1 Galleta de coco - L20.00", 1, 20);
            break;        
        case 3:
            agregarProducto("1 Tres leches - L60.00", 1, 60);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }     
    default:
        break;
    }
}