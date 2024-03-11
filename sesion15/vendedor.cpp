#include <iostream>
#include <vector>
#include "persona.h"
using namespace std;

// Definición de la clase Venta (utilizada dentro de la clase Ventas)
class Vendedor : public Persona
{
private:
    int id_vendedor;
    int ventas[];
    int numVentas;
#
public:
    Vendedor(int _id_vendedor, string _apellidos, string _nombres, string _dni, string _direccion , int ventas ) : Persona(_id_vendedor , _apellidos , _nombres ){

    }
 

    int GetId_producto() const
    {
        return id_producto;
    }

    void SetId_producto(int id_producto)
    {
        id_producto = id_producto;
    }

    int GetCantidad() const
    {
        return cantidad;
    }

    void SetCantidad(int cantidad)
    {
        cantidad = cantidad;
    }
};