#include "Usuario.h"
#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;

void Usuario::registrarUsuario(){
    cout<<"Nombre: "; fflush(stdin); gets(Nombre);
    cout<<"Apellido: "; fflush(stdin); gets(Apellido);
    cout<<"DNI: "; fflush(stdin); gets(DNI);
    cout<<"Correo: "; gets(Correo);
    cout<<"Contraseña: "; gets(Contra);

}


void Usuario::mostrarUsuario(){
    cout<<left;
    cout<<setw(20)<<Nombre;
    cout<<setw(20)<<Apellido;
    cout<<setw(20)<<DNI;
    cout<<setw(20)<<Correo;
    cout<<setw(20)<<Contra;
}

char* Usuario::getnombreUsuario(){
    return Nombre;
}
