#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int num, sum;
    scanf("%d", &num);
    
    int i = 0;
    sum = 0;
    
    while(1){
        i++;
        sum += i;
        if(sum >= num){break;}
    }
    
    printf("%d",i);
    return 0;
}
