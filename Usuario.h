#ifndef USUARIO_H
#define USUARIO_H

#include<string>
#include<iostream>
#include<fstream>

using namespace std;

class Usuario {

    private:
        char Nombre[20];
        char Apellido[20];
        char DNI[10];
        char Correo[20];
        char Contra[20];
    public:
        void registrarUsuario();
        void mostrarUsuario();

        char* getnombreUsuario();

};



#endif // USUARIO_H
