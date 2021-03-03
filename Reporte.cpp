#include "Reporte.h"
#include "Administrador.h"
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

class Administrador;

void Reporte::registrarReporte(){
   cout<<"Fecha: "; fflush(stdin); gets(Fecha);
   cout<<"Categoria: "; fflush(stdin); gets(Categoria);
   cout<<"Descripcion: "; cin.getline(Descripcion,50,'\n');
}

void Reporte::asignarAdministrador(Administrador* a){
    admin = a;
}

void Reporte::mostrarReporte(){
   cout<<left;
   cout<<setw(20)<<Fecha;
   cout<<setw(20)<<Categoria;
   cout<<setw(20)<<admin->getnombreAdministrador();
   cout<<setw(20)<<Descripcion;
   cout<<endl;
}
