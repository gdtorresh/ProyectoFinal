#include "Administrador.h"
#include "Usuario.h"

#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Usuario;

void Administrador::registrarAdministrador(){
    registrarUsuario();
    cout<<"Cargo: "; fflush(stdin); gets(Cargo);
    cout<<"Nivel: "; cin>>Nivel;

}

void Administrador::modificarAdministrador(){
    registrarAdministrador();

}

void Administrador::mostrarAdministrador(){
  	mostrarUsuario();
	cout<<left;
	cout<<setw(20)<<Cargo;
	cout<<setw(20)<<Nivel;
	cout<<endl;
}


char* Administrador::getnombreAdministrador(){
    return getnombreUsuario();
}
