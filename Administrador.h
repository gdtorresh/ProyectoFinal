#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "Usuario.h"

#include<iostream>
#include<string>
#include<string.h>
#include<fstream>


class Administrador:public Usuario{
    private:
        char Cargo[20];
        int Nivel;
    public:
        void registrarAdministrador();
        void modificarAdministrador();
        void mostrarAdministrador();
        char* getnombreAdministrador();
};


#endif // ADMINISTRADOR_H

