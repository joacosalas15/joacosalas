#include <stdio.h>
int main (){
    int x,nota,aprobados,reprobados;
    aprobados=0;
    reprobados=0;
    x=1;
    while (x<=10)
    {
        printf("ingrese la calificacion");
        scanf("%i",&nota);
        if (nota>=7)
        {
            aprobados=aprobados+1;
        }
        else{
            if (nota<7)
            {
                reprobados=reprobados+1;
            }
            
        }
        x=x+1;
    }
    printf("la cantidad de alumnos con mas de 7 son %i",aprobados);
    printf("\ny la cantidad de alumnos con menos de 7 son %i",reprobados);
    return 0;
}