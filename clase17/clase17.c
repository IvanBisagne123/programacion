#include "clase17.h"

 eEmpleado* nuevoEmpleado
   {
       eEmpleado* retornoEmpleado;
       retornoEmpleado= (eEmpleado*) calloc(sizeof(eEmpleado),1);
       return retornoEmpleado;
   }
   eEmpleado* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
   {
       eEmpleado* retornoEmpleado;
       retornoEmpleado =nuevoEmpleado();
       if(retornoEmpleado!=NULL)
       {
           setLegajo(retornoEmpleado,legajo);
           strcpy(retornoEmpleado->nombre,nombre);
           retornoEmpleado->sueldo=sueldo;
       }
       return retornoEmpleado;
   }
   int setLegajo(eEmpleado* pEmpleado,int legajo)
   {
       int esCorrecto=0;
       if(this!=NULL && legajo>=1000)
       {
           pEmpleado->legajo=legajo
           esCorrecto=1;
       }
   }
   int getLegajo(eEmpleado* pEmpleado)
   {
       int retornoLegajo=0;
       if(pEmpleado!=NULL)
       {
           retornoLegajo=pEmpleado->legajo
       }
       return retornoLegajo;
   }

   int mostrarEmpleado(eEmpleado*)
   {
       int isNULL=1;
       if(unEmpleado!= NULL)
       {
           isNULL=0;
           printf("%d--%%s--%2f",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
       }
   }
