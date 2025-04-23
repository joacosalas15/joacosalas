#include<stdio.h>
int main(){
    int n,x,cantidad;
    float largo;
    x=1;
    cantidad=0;
    printf("cuantas piezas va a procesar: ");
    scanf("%i",&n);
    while (x<=n)
    {
        printf("ingrese la medida de la pieza: ");
        scanf("%f",&largo);
        if (largo<=1.20 && largo<= 1.30)
        {
                cantidad=cantidad+1; 
        }
        x=x+1;
    }
    printf("la cantidad de piezas aptas son: %i",cantidad);
    

    return 0 ;
}