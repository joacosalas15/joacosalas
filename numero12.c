#include<stdio.h>
int main(){
    int num;
    printf("ingrese un numero: ");
    scanf("%i",&num);
    if (num>=10)
    {
        printf("su numero tiene 2 digitos");
    }
    else{
        printf("su numero tiene 1 digito");
    }
    return 0;
}