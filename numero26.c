#include<stdio.h>
#include<conio.h>
int main(){
    int x,h;
    printf("ingrese un valor entero: ");
    scanf("%i",&h);
    x=1;
while (x<=h)
{
    printf("%i",x);
    printf("\n");
    x=x+1;
}
    return 0;
}

