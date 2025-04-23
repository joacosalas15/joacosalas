#include<stdio.h>
int main (){
    int x,n;
    float altura,suma,promedio;
    x=1;
    suma=0;
    printf("ingrese la altura de n personas: ");
    scanf("%i",&n);
    while (x<=n)
    {
        printf("ingrese la altura de cada persona: ");
        scanf("%f",&altura);
            suma=suma+altura;
        x=x+1;
        
    }
    promedio=suma/n;
    printf("la altura promedio es: %f ",promedio);


    return 0;
}