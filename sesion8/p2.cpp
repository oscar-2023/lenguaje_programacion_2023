/*2. El banco “TingoBank” ha decidido aumentar el límite de crédito de las tarjetas de sus clientes,
para esto considera que si su cliente tiene tarjeta tipo 1, el aumento será de 25 %;
si tiene tipo 2, será de 35 %;
si tiene tipo 3, de 40 %, y para cualquier otro tipo, de 50 %.
Si la persona tiene deuda con el banco solo se le dará la mitad de incremento de los clientes que no tienen deuda para clientes 1 y 2,
el resto no tiene incremento. se debe realizar un sistema para que calcule el tipo e indique cual sera el aumento del cliente. usar arreglos
y struct*/

#include <iostream>
#include <string>
using namespace std;
struct Cliente
{
    int tipoTarjeta;
    bool tieneDeuda;
};

int main()
{
    int NUM_CLIENTES = 5;

    Cliente clientes[NUM_CLIENTES] = {
        {1, true},
        {2, false},
        {3, true},
        {4, false},
        {2, true}};

    double AUMENTO_TIPO1 = 0.25;
    double AUMENTO_TIPO2 = 0.35;
    double AUMENTO_TIPO3 = 0.40;
    double AUMENTO_OTROS = 0.50;

    for (int i = 0; i < NUM_CLIENTES; ++i)
    {
        double aumento = 0.0;
        if (clientes[i].tipoTarjeta == 1)
        {
            if (clientes[i].tieneDeuda)
            {
                aumento = AUMENTO_TIPO1 / 2;
            }
            else
            {
                aumento = AUMENTO_TIPO1;
            }
        }
        else if (clientes[i].tipoTarjeta == 2)
        {
            if (clientes[i].tieneDeuda)
            {
                aumento = AUMENTO_TIPO2 / 2;
            }
            else
            {
                aumento = AUMENTO_TIPO2;
            }
        }
        else if (clientes[i].tipoTarjeta == 3)
        {
            aumento = AUMENTO_TIPO3;
        }
        else
        {
            aumento = AUMENTO_OTROS;
        }

        cout << "Cliente " << i + 1 << " - Aumento: " << (aumento * 100) << "%" << endl;
    }

    return 0;
}    
