#include<stdio.h>
int main(){
    int num1,num2,num3,suma,producto;
    printf("ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo numero: ");
    scanf("%i",&num2);    
    printf("ingrese el tercero numero: ");
    scanf("%i",&num3);
if (num1==num2 && num1==num3)
{
    suma=num1+num2;
    printf("%i",suma);
    producto=suma*num3;
    printf("el producto de la suma del 2do y el 1ro por el 3ro es %i",producto);
}
    return 0;
}