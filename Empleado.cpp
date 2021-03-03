#include "Empleado.h"
#include "Usuario.h"
#include "Producto.h"

#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Usuario;

void Empleado::registrarEmpleado(){
   registrarUsuario();
   cout<<"Departamento: "; fflush(stdin); gets(Departamento);
}

void Empleado::mostrarEmpleado(){
   mostrarUsuario();
   cout<<setw(20)<<Departamento;
   cout<<endl;
}

char* Empleado::getnombreEmpleado(){
    return getnombreUsuario();
}



void Empleado :: asignarProductos(Producto* pro){
	productos[20] = pro;
}

void Empleado :: registrarOperacion(Producto* pro, int n){
	pro->getnombreProducto();
	n;
}

void Empleado :: mostrarOperacion(Producto* pro, int n){
	cout<<left;
	cout<<setw(20)<<pro->getnombreProducto();
	cout<<setw(20)<<n;
	cout<<endl;
}



