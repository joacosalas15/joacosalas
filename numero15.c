#include <stdio.h>

int main(){
    int numero;
    printf("ingrese un numero entero: ");
    scanf("%i",&numero);
    if (numero == 0)
    {
        printf("nulo");
    }
    else{
        if (numero > 0)
        {
            printf("es positivo");
        }
        else{
            printf("es negativo");
        }
    }

    return 0;
}