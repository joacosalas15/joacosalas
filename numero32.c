#include <stdio.h>
int main(){
    int x,serie;
    x=1;
    serie=11;
    while (x<=25)
    {
        printf("%i",serie);
        serie=serie+11;
        x=x+1;
    }

    return ;
}