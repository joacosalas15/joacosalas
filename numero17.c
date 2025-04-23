#include <stdio.h>
int main(){
    int totalpreguntas,totalcorrectas,porcentaje;
    printf("ingrese la cantidad total de preguntas del examen: ");
    scanf("%i",&totalpreguntas);
    printf("ingrese la cantidad total de preguntas correctas: ");
    scanf("%i",&totalcorrectas);
    porcentaje=totalcorrectas*100/totalpreguntas;
    if (porcentaje>=90)
    {
        printf("nivel maximo");
    }
    else{
        if (porcentaje>=75)
        {
            printf("nivel medio");
        }
        else{
            if (porcentaje>=50)
            {
                printf("nivel regular");
            }
            else{
                printf("fuera del nivel");
            }
        }
        
    }
    
    return 0;
}