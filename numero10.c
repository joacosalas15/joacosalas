#include <stdio.h>
int main(){
    int num1,num2,suma,producto,diferencia;
    float division;
    printf("ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("ingrese el segundo valor: ");
    scanf("%i", &num2);
    suma=num1+num2;
    diferencia=num1-num2;
    if (num1>num2)
    {
        printf("\nsi el num1 es mayor a num2 la suma total es %i",suma);
        printf("\ny la diferencia de este es %i",diferencia);
    }
    else{
        division=num1/num2;
        producto=num1*num2;
        printf("\nsi num2 es mayor a num1 el producto es estos es %i",producto);
        printf("\ny la division del mismo es %f",division);
    }
    return 0;
}