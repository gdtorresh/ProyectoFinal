#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Usuario.h"
#include "Producto.h"

#include<iostream>
#include<string>
#include<fstream>

class Producto;
class Empleado:public Usuario{
    private:

        char Departamento[20];
        Producto* productos[20];
        bool* centi;

    public:
        //void adignarValor(bool*);
        void registrarEmpleado();
        void mostrarEmpleado();
        char* getnombreEmpleado();
        void asignarProductos(Producto*);
        void registrarOperacion(Producto*, int);
        void mostrarOperacion(Producto*, int);


};

#endif // EMPLEADO_H

