#include <stdio.h>
int main(){
    int i,suma,valor,promedio;
    suma=0;
    for (i=1;i<=10;i++)
    {
        printf("ingrese un valor: ");
        scanf("%i",&valor);
        suma=suma+valor;
    }
    promedio=suma/10;
    printf("\nla suma de los valores es %i",suma);
    printf("\nel promedio de la suma es: %i",promedio);

    return 0;
}