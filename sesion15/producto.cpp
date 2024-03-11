#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Producto
{
private:
    int id_producto;
    string descripcion;
    string tipo;
    time_t fecha;
    float precio;

public:
    // Constructor
    Producto(int id, string desc, string tp, float prc) 
    {
        id_producto = id;
        descripcion = desc;
        tipo = tp;
        precio = prc;
        // Obtener la fecha actual
        fecha = time(nullptr);
    }
    int GetId_producto() const
    {
        return id_producto;
    }

    void SetId_producto(int id_producto)
    {
        id_producto = id_producto;
    }

    string GetDescripcion() const
    {
        return descripcion;
    }

    void SetDescripcion(string descripcion)
    {
        descripcion = descripcion;
    }

    string GetTipo() const
    {
        return tipo;
    }

    void SetTipo(string tipo)
    {
        tipo = tipo;
    }

    time_t GetFecha() const
    {
        return fecha;
    }

    void SetFecha(time_t fecha)
    {
        fecha = fecha;
    }

    float GetPrecio() const
    {
        return precio;
    }

    void SetPrecio(float precio)
    {
        precio = precio;
    }
};