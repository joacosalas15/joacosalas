#include<stdio.h>
int main(){
    int dia,mes,ano;
    printf("ingrese un dia del ano");
    scanf("%i",&dia);
    printf("ingrese un mes del ano");
    scanf("%i",&mes);
    printf("ingrese el ano");
    scanf("%i",&ano);
    if (mes==1 || mes==2 || mes==3)
    {
        printf("corresponde al primer trimestre");
    }
    else{
        if (mes==4 || mes==5 || mes==6);
        {
            printf("corresponde al segundo cuatrimestre");
        }
        
    }
    return 0;
}