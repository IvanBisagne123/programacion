#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50]="Martin";
    char otroNombre[50]="Jose Perez";
    int largo;
    int compara;

    strlwr(otroNombre);

    strcat(nombre,nombre);

    //strcpy(nombre,otroNombre);
    //strncpy(nombre,otroNombre,5);


    printf("su nombre es: %s", otroNombre);


    //printf("%d--%d\n\n", nombre, &nombre);
    //printf("ingrese su nombre: ");
    //fgets(nombre, 50, stdin);
    //scanf("%[^\n]",nombre);
    //gets(nombre);
    /*largo=strlen(nombre);

    printf("%d", largo);*/

    //compara=strcmp(nombre,"pepe");
    //sprintf("%d", compara);

    /*if(nombre == "pepe")
    {
        printf("Ud se llama pepe");
    }*/



    return 0;
}
