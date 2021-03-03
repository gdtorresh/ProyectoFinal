#include "Producto.h"
#include "Usuario.h"
#include "Empleado.h"
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

class Empleado;

Producto :: Producto(char c[], char n[], char cat[], int cant, int pre){
	strcpy(Codigo,c);
	strcpy(Nombre,n);
	strcpy(Categoria,cat);
	Cantidad = cant;
	Precio = pre;
}

void Producto :: registrarProducto(){
	cout<<"Codigo: "; gets(Codigo);
	cout<<"Nombre: "; gets(Nombre);
	cout<<"Categoria: "; gets(Categoria);
	cout<<"Cantidad: "; cin>>Cantidad;
	cout<<"Precio: "; cin>>Precio;
}

void Producto :: modificarProducto(){               //hecho
	registrarProducto();
}

void Producto :: mostrarProducto(){                //hecho
	cout<<left;
	cout<<setw(20)<<Codigo;
	cout<<setw(20)<<Nombre;
	cout<<setw(20)<<Categoria;
	cout<<setw(20)<<Cantidad;
	cout<<setw(20)<<Precio;
	cout<<endl;
}

char* Producto :: getnombreProducto(){
	return Nombre;
}

int Producto :: getcantProducto(){
	return Cantidad;
}

void Producto :: actualizarProductosuma(int n){
	Cantidad=Cantidad + n;
	cout<<getcantProducto();
	cout<<"   aumento"<<endl;
}

void Producto :: actualizarProductoresta(int n){
	Cantidad = Cantidad - n;
	cout<<getcantProducto();
	cout<<"   retiro"<<endl;
}



