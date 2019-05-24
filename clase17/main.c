#include <stdio.h>
#include <stdlib.h>
#include "clase17.h"
#define T 5
eEmpleado* fantasma(int, char*, float);
int main()
{
   eEmpleado* unEmpleado;

   eEmpleado* unEmpleado = fantasma(100,"Juan",1000);
   printf("lalala\n");
   mostrarEmpleado(unEmpleado);

    return 0;
}

eEmpleado* fantasma(int legajo, char* nombre, float sueldo)
{
    eEmpleado empleado;
    empleado.legajo=legajo;
    strcpy(empleado.nombre,nombre);
    empleado.sueldo=sueldo;


    return &empleado;
}
