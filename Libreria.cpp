#include "Libreria.h"

#include "Usuario.h"
#include "Administrador.h"
#include "Producto.h"
#include "Empleado.h"

#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

Libreria :: Libreria(char nom[], char direc[]){
	strcpy(nombre,nom);
	strcpy(direccion,direc);
}

void Libreria :: asignarAdministrador(Administrador* admon){
	administrador[20] = admon;
}

void Libreria :: asignarProductos(Producto* utiles){
	productos[20] = utiles;
}

void Libreria :: asignarEmpleados(Empleado* trabajador){
	empleados[20] = trabajador;
}

void Libreria :: mostrarLibreria(){
	cout<<"Libreria "<<nombre<<" ubicada en "<<direccion<<endl;
}

void Libreria :: mostrarAdministrador(Administrador* admon){
	admon->mostrarAdministrador();
}

void Libreria :: mostrarProductos(Producto* utiles){
	utiles->mostrarProducto();
}

void Libreria :: mostrarEmpleados(Empleado* trabajador){
	trabajador->mostrarEmpleado();
}
