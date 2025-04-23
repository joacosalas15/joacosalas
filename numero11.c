#include <stdio.h>
#include <conio.h>
int main(){
    int nota1,nota2,nota3,promedio;
    printf("ingrese la primer nota;");
    scanf("%i",&nota1);
    printf("ingrese la segunda nota;");
    scanf("%i",&nota2);
    printf("ingrese la tercer nota;");
    scanf("%i",&nota3);
    promedio= (nota1+nota2+nota3)/3;
if(promedio>=7)
{
    printf("usted esta promocionado");
}
else{
    printf("usted debe recursar");
}
    getch();
    return 0;
}