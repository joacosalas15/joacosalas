#include <stdio.h>
int main(){
    int x,n,sueldos,menores,mayores,gastos;
    menores=0;
    mayores=0;
    x=1;
    gastos=0;
    printf("ingrese la cantidad de empleados a examinar: ");
    scanf("%i",&n);  
    while (x<=n)
    {
        printf("ingrese el sueldo del empleado");
        scanf("%i",&sueldos);
        if (sueldos<=300)
        {
            menores=menores+1;
        }
        else{
            mayores=mayores+1;
        }
        gastos=gastos+sueldos;
        x=x+1;
    }
    printf("\nla cantidad de empleados con sueldos mayores a 300 son %i",mayores );
    printf("\nla cantidad con sueldos regulares con %i",menores);
    printf("\nlos gastos totales de la empresa son %i",gastos);
    return 0;
}