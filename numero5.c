#include<stdio.h>
int main(){
    int num1,num2,num3,num4,suma,producto;
    printf("ingrese el primer valor:");
    scanf("%i",&num1);
    printf("ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("ingrese el tercer valor:");
    scanf("%i",&num3);
    printf("ingrese el cuarto valor:");
    scanf("%i",&num4);
    suma=num1+num2;
    producto=num3*num4;
    printf("\nla suma del num1 y num2 es: %i",suma);
    printf("\nel producto del num3 y num4 es: %i",producto);
    return 0;
}