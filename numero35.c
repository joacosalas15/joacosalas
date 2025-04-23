#include <stdio.h>
int main (){
    int x,n,valor_lista1,valor_lista2,lista1,lista2;
    x=1;
    n=1;
    valor_lista1=0;
    valor_lista2=0;
    lista1=0;
    lista2=0;
    while (x<=15)
    {
        printf("ingrese el valor de la lista 1: ");
        scanf("%i",&valor_lista1);
        lista1=lista1+valor_lista1; 
        x=x+1;
    }
    while (n<=15)
    {
        printf("ingrese los valores de la lista 2: ");
        scanf("%i",&valor_lista2);
        lista2=lista2+valor_lista2;
        n=n+1;
    }
    if (lista1>lista2)
    {
        printf("lista 1 es mayor a lista 2");
    }
    else{
        if (lista2>lista1)
        {
            printf("la lista 2 es mayor a la lista 1");
        }
            else{
                printf("las listas son iguales");
            }
        }
    return 0;
}