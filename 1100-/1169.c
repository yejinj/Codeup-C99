#include <stdio.h>
 
int main (void)
{    
    int a, b, c;
    scanf("%d",&c);
    
    if(c >13){
        
        a = 112 -c + 1;
        b = 1;
        printf("%d %d",a, b);
    }
    else{
        a = 12 - c +1;
        b = 3;
        printf("%d %d",a, b);
    }
    return 0;
}

