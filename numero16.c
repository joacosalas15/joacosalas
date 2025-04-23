#include <stdio.h>
int main(){
    int numero;
    printf("ingrese un numero de 1,2 o 3 cifras: ");
    scanf("%i",&numero);
    if (numero<10)
    {
        printf("este numero tiene 1 digito");
    }
    else{
        if (numero<100)
        {
            printf("el numero es de 2 digitos");
        }
        else{
            if (numero<1000)
            {
                printf("el numero tiene 3 digitos");
            }
            else{
                printf("error no se puede sobre pasar los 3 cifras");
            }
        }

    }

    return 0;
}