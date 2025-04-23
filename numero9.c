#include <stdio.h>
int main(){
    int num1,num2;
    printf("ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo valor: ");
    scanf("%i",&num2);

    if (num1>num2)
    {
        printf("el numero %i es mayor",num1);
    }
    else{
        printf("el numero %i es mayor",num2);
    }

}