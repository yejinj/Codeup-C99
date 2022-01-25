#include<stdio.h>
 
int main(void)
{
	float n;
	scanf("%f", &n);
	
	if ((50 <= n) && (n <= 60))
		printf("win");
	else
		printf("lose");
	
	return 0;
}

