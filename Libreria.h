#ifndef LIBRERIA_H
#define LIBRERIA_H

#include "Usuario.h"
#include "Administrador.h"
#include "Producto.h"
#include "Empleado.h"

#include<iostream>
#include<string.h>
#include<fstream>

class Libreria{
    private:
        char nombre[20];
        char direccion[40];
        Administrador* administrador[20];
        Producto* productos[20];
        Empleado* empleados[20];
    public:
        Libreria(char[], char[]);
    	void asignarAdministrador(Administrador*);
    	void asignarProductos(Producto*);
    	void asignarEmpleados(Empleado*);
    	void mostrarAdministrador(Administrador*);
        void mostrarProductos(Producto*);
        void mostrarEmpleados(Empleado*);
        void mostrarLibreria();

};

#endif // LIBRERIA_H
