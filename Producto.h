#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "Usuario.h"
#include "Empleado.h"

#include<iostream>
#include<string.h>
#include<fstream>

class Empleado;

class Producto{
    private:
        char Codigo[20];
        char Nombre[20];
        char Categoria[20];
        int Cantidad;
        int Precio;
    public:
        Producto(char[], char[], char[], int, int);
        //void registrarEntrada(int, Empleado*);
		//void registrarSalida(int, Empleado*);
        void actualizarCantidad();   ///////no se aplicado
		void registrarProducto();
		void modificarProducto();
		void mostrarProducto();
		char* getnombreProducto();
		int getcantProducto();
		void actualizarProductosuma(int);
		void actualizarProductoresta(int);
};

#endif // PRODUCTO_H