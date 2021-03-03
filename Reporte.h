#ifndef REPORTE_H
#define REPORTE_H

#include "Administrador.h"

#include<iostream>
#include<string.h>
#include<fstream>

class Reporte{
    private:
        char Fecha[20];
        char Categoria[20];
        char Descripcion[50];
        Administrador* admin = NULL;
    public:
        void registrarReporte();
        void mostrarReporte();
        void asignarAdministrador(Administrador*);
};

#endif // REPORTE_H

