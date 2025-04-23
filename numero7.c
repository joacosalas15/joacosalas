#include<stdio.h>
int main(){
    int producto;
    float precio,total;
    printf("ingrese la cantidad del producto: ");
    scanf("%i",&producto);
    printf("ingrese el precio del producto: ");
    scanf("%f",&precio);
    total= producto*precio;
    printf("el valor total del producto total a abonar es: %f",total);
    return 0;
}
