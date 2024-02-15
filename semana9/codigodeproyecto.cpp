#include <iostream>
#include <string>
using namespace std;


struct Zapato {
    string modelo;
    string marca;
    float precio;
    int stock;
};
void realizarVenta(Zapato& zapato) {
    int cantidad;
    cout << "Ingrese la cantidad de " << zapato.modelo << " a vender: ";
    cin >> cantidad;

    if (cantidad > 0 && cantidad <= zapato.stock) {
        zapato.stock -= cantidad;
        cout << "Venta realizada con exito. Total a pagar: " << cantidad * zapato.precio << " $" << endl;
    } else {
        cout << "Error: Cantidad no valida o insuficiente en stock." << endl;
    }
}



int main() {
    const int numZapatos = 3; 
    Zapato zapatos[numZapatos];

    
    zapatos[0] = {"Zapato1", "MarcaA", 50.00, 25};
    zapatos[1] = {"Zapato2", "MarcaB", 60.00, 20};
    zapatos[2] = {"Zapato3", "MarcaC", 40.00, 50};

    
    int opcion;

    do {
        
        cout << "\n======= Menu =======\n";
        cout << "1. Ver lista de zapatos\n";
        cout << "2. Realizar venta\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        
        switch (opcion) {
            case 1:
                
                cout << "\n======= Lista de Zapatos =======\n";
                for (int i = 0; i < numZapatos; ++i) {
                    cout << "Modelo: " << zapatos[i].modelo << "\tMarca: " << zapatos[i].marca << "\tPrecio: " << zapatos[i].precio << "\tStock: " << zapatos[i].stock << endl;
                }
                break;

            case 2:
                
                int indiceVenta;
                cout << "\nIngrese el numero de zapato a vender: ";
                cin >> indiceVenta;

                if (indiceVenta >= 1 && indiceVenta <= numZapatos) {
                    realizarVenta(zapatos[indiceVenta - 1]);
                } else {
                    cout << "Error: Zapato no valido." << endl;
                }
                break;

            case 3:
                
                cout << "Saliendo del programa. Gracias por usar nuestro sistema." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}
