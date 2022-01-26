#include <stdio.h>

int main ()
{    
    int a, b;
    char sign;
    scanf("%d%c%d", &a, &sign, &b);
	
	if (sign == '+')
		printf("%d", a + b);
	else if (sign == '-')
		printf("%d", a - b);
	else if (sign == '*')
		printf("%d", a * b);
	else if (sign == '/')
		printf("%.02f", (float)a / (float)b);
	    
    return 0;
}
