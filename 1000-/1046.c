﻿#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    printf("%d\n", a+b+c);
    printf("%.01f", (a+b+c)/3.00);
    
    return 0;
}
