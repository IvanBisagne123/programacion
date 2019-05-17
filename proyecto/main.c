#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void mostrarArray(int*,int);

int main()
{
    int vectorEnteros[5]= {5,9,7,8,1};

    int i

    mostrarArray(vectorEnteros 5);

    return 0;
}

void mostrarArray(int* pArray,int tam);
{
    int* puntero;
    int i;

    puntero = variable;

    for(i=0; i<5; i++)
    {
        printf("%d\n", *(puntero+i));/*variable[i]*/
    }
}
