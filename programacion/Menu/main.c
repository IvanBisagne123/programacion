#include <stdio.h>
#include <stdlib.h>
int pedirOpcion(char texto[]);

int main()
{
    int Opcion;
    char seguir='s';

    do
    {
        Opcion = pedirOpcion("1. sumar\n2. restar\n3. multiplicar\n4. informes\n5. salir\nElija una opcion:");

        switch(Opcion)
        {
            case 1:
                printf("estoy dando de alta\n");
            break;
            case 2:
                printf("estoy dando de baja");
            break;
            case 3:
                printf("estoy modificando\n");
            break;
            case 4:
                printf("estoy informando\n");
            break;
            case 5:
                seguir='n';
            break;
            default:
                printf("opcion incorrecta");
            break;

        }
        system("pause");
        system("cls");

    }while(seguir=='s');

    return 0;
}
int pedirOpcion(char texto[])
{
    int Opcion;

    printf("%s", texto);
    scanf("%d",&Opcion);

    return Opcion;
}