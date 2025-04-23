#include <stdio.h>
int main(){
    int nota1,nota2,nota3,prom;
    printf("ingrese la primer nota: ");
    scanf("%i",&nota1);
    printf("ingrese la segunda nota: ");
    scanf("%i",&nota2);
    printf("ingrese la tercer nota: ");
    scanf("%i",&nota3);
    prom=(nota1+nota2+nota3)/3;
    if (prom>=7)
    {
        printf("usted esa promocionado");
    }
    else if(prom>=4){
        printf("usted esa regular");
        }             
    else{
        printf("usted esta reprobado debe recursar el año fracasado");
    }
    return 0;
}