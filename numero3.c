#include <stdint.h>
#include <conio.h>
int main(){
    int num1,num2,suma,producto; 
    printf("ingrese el primer valor del numero entero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo valor del numero entero: ");
    scanf("%i",&num2);
    suma= num1+num2;
    producto=num2*num1;
    printf("la suma de los valores es:");
    printf("%i",suma);
    printf("\n");
    printf("el producto de los valores es:");
    printf("%i",producto);
    return 0;
}