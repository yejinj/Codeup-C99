#include <stdio.h>

int main ()
{    
    int a, b, t;    
    scanf("%d %d %d", &t, &a, &b);
    
    int i;
    for (i = t; i < 90; i += 5) {
    	a ++;
	}
    
    if (a > b)
    	printf("win");
    else if (a < b)
    	printf("lose");
    else
    	printf("same");
    
    return 0;
}
