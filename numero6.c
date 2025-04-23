#include<stdio.h>

int main(){
    int num1,num2,num3,num4,sumatotal;
    float promedio;
    printf("ingrese el primer valor:");
    scanf("%i",&num1);
    printf("ingrese el primer valor:");
    scanf("%i",&num2);
    printf("ingrese el primer valor:");
    scanf("%i",&num3);
    printf("ingrese el primer valor:");
    scanf("%i",&num4);
    sumatotal=num1+num2+num3+num4;
    promedio= sumatotal/4;
    printf("\nla suma de todos los numeros ingresados es: %i",sumatotal);
    printf("\nel promedio de todos los valores ingresados es: %f",promedio);
    return 0;
}