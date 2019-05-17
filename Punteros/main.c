#include <stdio.h>
#include <stdlib.h>

/** \brief permite cargar un caracter
 *
 * \param char* el char a cargar
 * \return int [0]-> si no se pudo cargar el caracter
               [1]-> si se pudo cargar el caracter
 *
 */

int getCaracter(char*, char*mensaje, char msjError, char, char);
void mostrarletra(char*);

int main()
{
    char letra;

    int estado;
    estado = getCaracter(&letra);
    if(estado==1)
    {
        printf("\ndatos cargados con exito\n");
    }
    else
    {
        printf("\nel dato no fue guardado!!!\n");
    }

    mostrarletra(NULL);

    return 0;

}

int getletra(char* pLetra)
{
    int cargo = 0;
    if(pLetra !=NULL)
    {
        printf("ingrese una letra: ");
        fflush(stdin);
        scanf("%c", pLetra);
        cargo=1;
    }
    return cargo;
}

void mostrarletra(char* pLetra){
    if(pLetra!=NULL)
    {
        printf("%c", *pLetra);
    }
}
