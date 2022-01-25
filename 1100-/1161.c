#include <stdio.h>
 
 
int main (void)
{
    int num1, num2, sum;
    scanf("%d %d",&num1 , &num2);
    sum = num1 + num2;
    
    if( (num1%=2) ){printf("홀수+");}
    else {printf("짝수+");}
    
    if( (num2%=2) ){printf("홀수=");}
    else {printf("짝수=");}
    
    if( (sum%=2) ){printf("홀수");}
    else {printf("짝수");}
    
    return 0;
}

