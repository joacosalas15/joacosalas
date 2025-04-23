#include<stdio.h>
int main(){
    int x,acu,suma,valor;
    x=1;
    suma=0;
    while (x<=10)
    {
        printf("ingrese un valor");
        scanf("%i",&valor);
        suma = suma + valor;
        x=x+1;
    }
    acu=suma/10;
    printf("\n la suma de los 10 valores es: %i",suma );
    printf("el promedio es %i",acu );


    return 0;
}