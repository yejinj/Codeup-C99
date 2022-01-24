#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i;
    scanf("%d", &i);
    
    int j, sum = 0;
    for(j = 1; j <= i; j++){
		sum += j;
		
        if(sum >= i){
            printf("%d",sum);
            break;
        }
    }
    return 0;
}
