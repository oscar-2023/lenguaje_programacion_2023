#include <iostream>

using namespace std;

void consultarSaldo(double saldo)
{
    cout << "Saldo actual: $" << saldo << endl;
}

void retirarDinero(double &saldo)
{
    double cantidad;
    cout << "Ingrese la cantidad a retirar: $";
    cin >> cantidad;

    if (cantidad > 0 && cantidad <= saldo)
    {
        saldo -= cantidad;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    }
    else
    {
        cout << "Error: Cantidad inválida o insuficiente saldo." << endl;
    }
}

void depositarDinero(double &saldo)
{
    double cantidad;
    cout << "Ingrese la cantidad a depositar: $";
    cin >> cantidad;

    if (cantidad > 0)
    {
        saldo += cantidad;
        cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
    }
    else
    {
        cout << "Error: Cantidad inválida." << endl;
    }
}

int main()
{
    double saldo = 1000.0;

    int opcion;

    do
    {
        cout << "\n--- Cajero Automático ---\n"
             << "1. Consultar Saldo\n"
             << "2. Retirar Dinero\n"
             << "3. Depositar Dinero\n"
             << "4. Salir\n"
             << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            consultarSaldo(saldo);
            break;
        case 2:
            retirarDinero(saldo);
            break;
        case 3:
            depositarDinero(saldo);
            break;
        case 4:
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción inválida. Intente de nuevo." << endl;
        }

    } while (opcion != 4);

    return 0;
}
