#include<stdio.h>
int main(){
    int dd,mm,year;
    printf("ingrese un dia del mes: ");
    scanf("%i",&dd);
    printf("ingrese un mes del ano: ");
    scanf("%i",&mm);
    printf("ingrese el ano: ");
    scanf("%i",&year);
    if (dd=25 && mm==12)
    {
        printf("FELIZ NAVIDAD DEL ANO %i",year);
    }
    else{
        printf("tu fecha es %i",dd);
        printf("del mes %i",mm);
        printf("del ano %i",year);
    }

    return 0;
}