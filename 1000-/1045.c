#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("%d\n", num1+num2);
    printf("%d\n", num1-num2);
    printf("%d\n", num1*num2);
    printf("%d\n", num1/num2);
    printf("%d\n", num1%num2);
    printf("%.02f", (float)num1/(float)num2);
    
    return 0;
}
