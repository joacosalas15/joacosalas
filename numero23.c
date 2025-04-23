#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo numero: ");
    scanf("%i",&num2);   
    printf("ingrese el tercero numero: ");
    scanf("%i",&num3);
if (num1<10 || num2<10 || num3<10)
{
    printf("alguno de los numeros es menor 10");
}
return 0;
}