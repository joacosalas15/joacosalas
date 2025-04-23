#include <stdio.h>
int main(){
    int sueldo;
    printf("ingrese su sueldo: ");
    scanf("%i",&sueldo);
    if(sueldo>3000)
    {
        printf("esta persona debe abonar impuestos");
    }
    else{
        printf("esta persona no debe abonar impuestos");
    }
return 0;
}