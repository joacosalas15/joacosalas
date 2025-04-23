#include<stdio.h>

int main(){
    int lado,perimetro;
    printf("ingrese el valor del lado del cuadrado: ");
    scanf("%i",&lado);
    perimetro= lado*4;
    printf("el lado del cuadrado es: %i ",lado);
    printf("\nel perimetro del cuadrado es: %i",perimetro);
    return 0;
}