#include <iostream>
#include <string>
#include <ctime>
#include "vendedor.cpp"

using namespace std;

class Ventas {
private:
    int id_ventas;
    int id_producto;
    time_t fecha;
    int cantidad;
    

public:
    // Constructor
    Ventas(int idVentas, int idProducto, int cantidad) {
        id_ventas = idVentas;
        id_producto = idProducto;
        this->cantidad = cantidad;
        // Obtener la fecha actual
        fecha = time(nullptr);
    }
    int GetId_ventas() const {
        return id_ventas;
    }

    void SetId_ventas(int id_ventas) {
        id_ventas = id_ventas;
    }

    int GetId_producto() const {
        return id_producto;
    }

    void SetId_producto(int id_producto) {
        id_producto = id_producto;
    }

    time_t GetFecha() const {
        return fecha;
    }

    void SetFecha(time_t fecha) {
        fecha = fecha;
    }

    int GetCantidad() const {
        return cantidad;
    }

    void SetCantidad(int cantidad) {
        cantidad = cantidad;
    }

};    