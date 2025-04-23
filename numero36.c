#include <stdio.h>
int main(){
    int x,n,pares,impares,valor;
    printf("ingrese la cantidad de de numeros a cargar: ");
    scanf("%i",&n);
    x=1;
    pares=0;
    impares=0;
    valor=0;

    while (x<=n)
    {
        printf("ingrese el valor: ");
        scanf("%i",&valor);
        if (valor%2==0)
        {
            pares=pares+1;
        }
        else{
            impares=impares+1;

        }
    x=x+1;
    }
    printf("\nla cantidad de pares son %i",pares);
printf("\nla cantidad de impares son %i",impares);

    return 0;
}