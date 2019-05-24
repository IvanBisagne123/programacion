#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int* x;
    int i;
    int aux;

    x = (int*) calloc(sizeof(int),T);

    if(x!=NULL)
     {
         for(i=0;i<T;i++)
         {
             printf("ingrese un numero: ");
             scanf("%d", x+i);
         }
          for(i=0;i<T;i++)
          {
              printf("%d\n", *(x+i));
          }
          printf("agrego 5 mas: \n");

          aux=(int*)realloc(x,sizeof(int)*T+5);
          if(aux!=NULL)
          {
              x=aux;
              for(i=0;i<T+5;i++)
         {
             printf("ingrese un numero: ");
             scanf("%d", x+i);
         }
          for(i=0;i<T+5;i++)
          {
              printf("%d\n", *(x+i));
          }
          }
          printf("Quito 4: \n");
          x=(int*)realloc(x,sizeof(int)*(T+5-4));


            for(i=0;i<T+5;i++)
          {
              printf("%d\n", *(x+i));
          }

     }

    return 0;
}
