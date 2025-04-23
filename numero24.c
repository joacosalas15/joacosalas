#include<stdio.h>
int main(){
    int cordX,cordY;
    printf("ingrese la cordenada X");
    scanf("%i",&cordX);
    printf("ingrese la cordenada Y");
    scanf("%i",&cordY);
    if (cordX>0 && cordY>0)
    {
        printf("la cordenada esta en el primer cuadrante");
    }
    else{
        if (cordX<0 && cordY<0)
        {
            printf("la cordenada esta en el cuarto cuadrante");
        }
        else{
            if (cordX>0 && cordY<0)
            {
                printf("la cordenada esta en el tercer cuadrante");
            }
            else
            {
                printf("la cordenada esta en el segundo cuadrante");
            }
        }
        
    }

    return 0;
}