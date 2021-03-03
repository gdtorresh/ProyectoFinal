#include <iostream>
#include <string>
#include "Usuario.h"
#include "Administrador.h"
#include "Empleado.h"
#include "Reporte.h"
#include "Producto.h"
//#include "RegistroProducto"
#include "Libreria.h"


#include<iomanip>

using namespace std;

int main(){

        Libreria* libreria[20];
        Administrador administrador[20];
        Reporte reportes[20];
        Empleado empleados[20];       
        Usuario usuarios[20];
  
        int nLibreria=0;
        int nAdmin=0;
        int nReportes=0;
        int nEmpleados=0;
        int nProductos=4;
        int nUsuario;
        int continuar;
        
        Libreria santa("Santa Maria","2 De Mayo Calle, Tacna 23001");
        int indice;
        int cent=1;
        int indice1;
        int continuar1;
        int nUsuario;
        
        int continuar;
        //precargar datos clase producto
        Producto *productos[20];
        Producto pro1("0001","Paquete Papel bond","Stanford",20,10);
        Producto pro2("0002","Plumones Fiesta","Faber Castell",30,5);
        Producto pro3("0003","Tempera","Faber Castell",50,2);
        Producto pro4("0004","Lapiz Grafito","Alpha",50,1);
        Producto pro5("0005","Cuaderno","Alpha",100,3);

        productos[0] = &pro1;
        productos[1] = &pro2;
        productos[2] = &pro3;
        productos[3] = &pro4;
        productos[4] = &pro5;


        int cant;
        int nRegistros=0;
        //RegistroProducto registros[20];
    //	productos[0]("0002","Plumones Fiesta","Faber Castell",30,5);
    //	productos[0].registrarProducto();
        cout<<endl;
        //productos[0].mostrarProducto();

    do{

        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"                software de control de inventario               "<<endl;
        cout<<"                                                                "<<endl;
        cout<<"                      LIBRERIA SANTA MARIA                      "<<endl;
        cout<<"                             ver 1.0                            "<<endl;
        cout<<"                                                                "<<endl;
        cout<<"      ______________.______________________._____________       "<<endl;
        cout<<"                                                                "<<endl;
        cout<<"                                                                "<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"Continuar(1): "; cin>>continuar;
        system("cls");

    }while(continuar!=1);


    while(cent=1){
        system("cls");
        cout<<"---------------------------------"<<endl;
        cout<<"              INICIO             "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"------------Ingresar------------- "<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"(1)Administrador"<<endl;
        cout<<"(2)Empleado"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"(3)Informacion Libreria"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"\t\t";
        cout<<"Ingresar:"; cin>>continuar;

        switch(continuar){
            case 1:
                system("cls");
                cout<<"--------------------------------------"<<endl;
                cout<<"            ADMINISTRADOR             "<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<endl<<endl<<endl;
                cout<<"(1)Registrar administrador"<<endl;
                cout<<"(2)Modificar Administrador"<<endl;
                cout<<"(3)Mostrar Administrador"<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<"(4)Registrar empleado"<<endl;
                cout<<"(5)Realizar reportes"<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<"Ingresar: "; cin>>continuar;


                switch(continuar){
                    case 1:
                        system("cls");
                        administrador[nAdmin].registrarAdministrador();
                        nAdmin++;
                        cout<<"\nRegistro exitoso!"<<endl;
                        break;
                        system("pause");


                    case 2:
                        system("cls");
                        cout<<endl;
                        cout<<"-------LISTA DE ADMINISTRADORES-------"<<endl;
                        cout<<endl;
                        if(nAdmin==0){
                            cout<<"No hay administradores registrados. Ingrese administradores por favor."<<endl;
                        }
                        else{

                            cout<<left;
                            cout<<setw(3)<<"#";
                            cout<<setw(20)<<"Nombre";
                            cout<<setw(20)<<"Apellido";
                            cout<<setw(20)<<"DNI";
                            cout<<setw(20)<<"Correo";
                            cout<<setw(20)<<"Contraseña";
                            cout<<setw(20)<<"Cargo";
                            cout<<setw(20)<<"Nivel";
                            cout<<endl;
                            for(int i=0;i<nAdmin;i++){
                                cout<<left<<setw(3)<<i+1;
                                administrador[i].mostrarAdministrador();
                            }

                            cout<<"Ingresar: "; cin>>indice;
                            cout<<endl;
                            administrador[indice-1].modificarAdministrador();
                            cout<<endl;
                            cout<<"Registro exitoso!"<<endl;
                        }
                        system("pause");
                        break;


                    case 3:
                        system("cls");
                        cout<<"---------LISTA DE ADMINISTRADORES---------"<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Nombre";
                        cout<<setw(20)<<"Apellido";
                        cout<<setw(20)<<"DNI";
                        cout<<setw(20)<<"Correo";
                        cout<<setw(20)<<"Contraseña";
                        cout<<setw(20)<<"Cargo";
                        cout<<setw(20)<<"Nivel";
                        cout<<endl;
                        for(int i=0;i<nAdmin;i++){
                            cout<<left<<setw(3)<<i+1;
                            administrador[i].mostrarAdministrador();
                        }
                        system("pause");
                        break;

                    case 4:
                        system("cls");
                        cout<<"-------------REGISTRO EMPLEADO-------------"<<endl;
                        empleados[nEmpleados].registrarEmpleado();
                        cout<<endl;
                        nEmpleados++;
                        cout<<"Registro existoso!"<<endl;
                        system("pause");
                        break;

                    case 5:
                        system("CLS");
                        reportes[nReportes].registrarReporte();
                        cout<<endl;
                        cout<<"Documentado por ..."<<endl;
                        cout<<"-------------LISTA DE ADMINISTRADORES-------------"<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Nombre";
                        cout<<setw(20)<<"Apellido";
                        cout<<setw(20)<<"DNI";
                        cout<<setw(20)<<"Correo";
                        cout<<setw(20)<<"Contraseña";
                        cout<<setw(20)<<"Cargo";
                        cout<<setw(20)<<"Nivel";
                        cout<<endl;
                        for(int i=0;i<nAdmin;i++){
                            cout<<left<<setw(3)<<i+1;
                            administrador[i].mostrarAdministrador();
                        }
                        cout<<endl;
                        cout<<"Ingresar: "; cin>>indice;
                        reportes[nReportes].asignarAdministrador(&administrador[indice-1]);
                        nReportes++;
                        //pruebas
                        cout<<"-------------reportes-------------"<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Fecha";
                        cout<<setw(20)<<"Categoria";
                        cout<<setw(20)<<"Administrador";
                        cout<<setw(20)<<"Descripcion ";
                        cout<<endl;
                        for(int i=0;i<nReportes;i++){
                            cout<<left<<setw(3)<<i+1;
                            reportes[i].mostrarReporte();
                        }
                        system("pause");

                    break;

                    default:
                        cout<<"Opcion invalida"<<endl;
                        system("pause");
                        break;
                }

            break;


            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            case 2:
                system("cls");
                cout<<"--------------------------------------"<<endl;
                cout<<"              EMPLEADOS               "<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<endl<<endl<<endl;
                cout<<"(1)Realizar operacion"<<endl;
                cout<<"(2)Mostrar registro de operaciones"<<endl;
                cout<<endl;
                cout<<"Ingresar: "; cin>>continuar;

                switch(continuar){
                    case 1:
                        system("cls");
                        cout<<"Que desea hacer?"<<endl;
                        cout<<endl;
                        cout<<"(1)Aumentar productos"<<endl;
                        cout<<"(2)Retirar productos"<<endl;
                        cout<<endl;
                        cout<<"Ingresar: "; cin>>continuar;

                        switch(continuar){
                            case 1:
                                system("cls");
                                cout<<"-----------PRODUCTOS----------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Codigo";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Categoria";
                                cout<<setw(20)<<"Cantidad";
                                cout<<setw(20)<<"Precio";
                                cout<<endl;

                                for(int i=0;i<nProductos;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    productos[i]->mostrarProducto();
                                }

                                cout<<"Ingresar: "; cin>>indice;
                                cout<<"Ingrese cantidad: "; cin>>cant;
                                empleados[nEmpleados].registrarOperacion(productos[indice-1], cant);

                                //operacion
                                cout<<"-----------------operacion--------------";
                                cout<<endl;
                                empleados[nEmpleados].mostrarOperacion(productos[indice-1], cant);
                                cout<<endl;
                                productos[indice-1]->actualizarProductosuma(cant);
                                cout<<endl;

                                cout<<"Realizado por..."<<endl;
                                cout<<endl;
                                cout<<"--------------EMPLEADOS---------------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Apellido";
                                cout<<setw(20)<<"DNI";
                                cout<<setw(20)<<"Correo";
                                cout<<setw(20)<<"Contraseña";
                                cout<<setw(20)<<"Departamento";
                                cout<<endl;
                                for(int i=0;i<nEmpleados;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    empleados[i].mostrarEmpleado();
                                }

                                cout<<"Ingresar: "; cin>>indice;

                                empleados[indice-1].getnombreEmpleado();

                                //probando lista de producto
                                cout<<"--------------------lista producto-------------------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Codigo";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Categoria";
                                cout<<setw(20)<<"Cantidad";
                                cout<<setw(20)<<"Precio";
                                cout<<endl;

                                for(int i=0;i<nProductos;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    productos[i]->mostrarProducto();
                                }
                                cout<<endl;

                            break;

                            case 2:
                                system("cls");
                                cout<<"-----------PRODUCTOS----------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Codigo";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Categoria";
                                cout<<setw(20)<<"Cantidad";
                                cout<<setw(20)<<"Precio";
                                cout<<endl;

                                for(int i=0;i<nProductos;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    productos[i]->mostrarProducto();
                                }

                                cout<<"Ingresar: "; cin>>indice;
                                do{
                                    cout<<"Ingrese cantidad: "; cin>>cant;
                                    if(cant>productos[indice-1]->getcantProducto()){
                                        cout<<"Cantidad superior a la disponible, Intente de nuevo"<<endl;
                                    }
                                }while(cant>productos[indice-1]->getcantProducto());

                                empleados[nEmpleados].registrarOperacion(productos[indice-1], cant);

                                //operacion
                                cout<<"-----------------operacion--------------";
                                cout<<endl;
                                empleados[nEmpleados].mostrarOperacion(productos[indice-1], cant);
                                cout<<endl;
                                productos[indice-1]->actualizarProductoresta(cant);


                                cout<<"Realizado por..."<<endl;
                                cout<<endl;
                                cout<<"--------------EMPLEADOS---------------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Apellido";
                                cout<<setw(20)<<"DNI";
                                cout<<setw(20)<<"Correo";
                                cout<<setw(20)<<"Contraseña";
                                cout<<setw(20)<<"Departamento";
                                cout<<endl;
                                for(int i=0;i<nEmpleados;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    empleados[i].mostrarEmpleado();
                                }

                                cout<<"Ingresar: "; cin>>indice;

                                empleados[indice-1].getnombreEmpleado();

                                //probando lista de producto
                                cout<<"--------------------lista producto-------------------"<<endl;
                                cout<<left;
                                cout<<setw(3)<<"#";
                                cout<<setw(20)<<"Codigo";
                                cout<<setw(20)<<"Nombre";
                                cout<<setw(20)<<"Categoria";
                                cout<<setw(20)<<"Cantidad";
                                cout<<setw(20)<<"Precio";
                                cout<<endl;

                                for(int i=0;i<nProductos;i++){
                                    cout<<left<<setw(3)<<i+1;
                                    productos[i]->mostrarProducto();
                                }


                            break;

                        }

                        system("pause");

                    break;



                    case 2:
                        system("cls");
                        cout<<"---------------LISTA DE OPERACIONES----------------"<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Empleado";
                        cout<<setw(20)<<"Producto";
                        cout<<setw(20)<<"Cantidad";
                        cout<<endl;

                        for(int i=0;i<nEmpleados;i++){
                            cout<<left<<setw(3)<<i+1;
                            cout<<setw(20)<<empleados[i].getnombreEmpleado();
                            empleados[i].mostrarOperacion(productos[i], cant);
                            cout<<endl;
                        }

                        system("pause");

                    break;


                }
                break;



            case 3:
                system("cls");
                cout<<"-------------------------------------------------"<<endl;
                cout<<"              INFORMACION LIBRERIA               "<<endl;
                cout<<"-------------------------------------------------"<<endl;
                cout<<endl<<endl<<endl;
                cout<<"(1)Datos principales"<<endl;
                cout<<"(2)Mostrar administradores"<<endl;
                cout<<"(3)Mostrar empleados"<<endl;
                cout<<"(4)Mostrar productos"<<endl;
                cout<<endl;
                cout<<"Ingresar: "; cin>>continuar;

                switch(continuar){
                    case 1:
                        system("cls");
                        santa.mostrarLibreria();
                        cout<<endl;
                        system("pause");

                    break;
                    case 2:
                        system("cls");
                        cout<<"-----------------------------------------------------"<<endl;
                        cout<<"              LISTA DE ADMINISTRADORES               "<<endl;
                        cout<<"-----------------------------------------------------"<<endl;
                        cout<<endl<<endl<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Nombre";
                        cout<<setw(20)<<"Apellido";
                        cout<<setw(20)<<"DNI";
                        cout<<setw(20)<<"Correo";
                        cout<<setw(20)<<"Contraseña";
                        cout<<setw(20)<<"Cargo";
                        cout<<setw(20)<<"Nivel";
                        cout<<endl;


                        for(int i=0;i<nAdmin;i++){
                            cout<<left<<setw(3)<<i+1;
                            libreria[i]->mostrarAdministrador(&administrador[i]);
                        }
                        system("pause");

                    break;
                    case 3:
                        system("cls");
                        cout<<"-----------------------------------------------"<<endl;
                        cout<<"              LISTA DE EMPLEADOS               "<<endl;
                        cout<<"-----------------------------------------------"<<endl;
                        cout<<endl<<endl<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Nombre";
                        cout<<setw(20)<<"Apellido";
                        cout<<setw(20)<<"DNI";
                        cout<<setw(20)<<"Correo";
                        cout<<setw(20)<<"Contraseña";
                        cout<<setw(20)<<"Departamento";
                        cout<<endl;

                        for(int i=0;i<nEmpleados;i++){
                            cout<<left<<setw(3)<<i+1;
                            libreria[i]->mostrarEmpleados(&empleados[i]);
                        }
                        system("pause");

                    break;
                    case 4:
                        system("cls");
                        cout<<"-----------------------------------------------"<<endl;
                        cout<<"              LISTA DE PRODUCTOS               "<<endl;
                        cout<<"-----------------------------------------------"<<endl;
                        cout<<endl<<endl<<endl;
                        cout<<left;
                        cout<<setw(3)<<"#";
                        cout<<setw(20)<<"Codigo";
                        cout<<setw(20)<<"Nombre";
                        cout<<setw(20)<<"Categoria";
                        cout<<setw(20)<<"Cantidad";
                        cout<<setw(20)<<"Precio";
                        cout<<endl;

                        for(int i=0;i<nProductos;i++){
                            cout<<left<<setw(3)<<i+1;
                            libreria[i]->mostrarProductos(productos[i]);
                        }
                        system("pause");

                    break;

                }

                break;


        }

    }    //no tocar este parentesis


    return 0;
}
