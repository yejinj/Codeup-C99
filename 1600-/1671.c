#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a == b)
		printf("tie");
	else if ((a == 0 && b == 1) || (a == 1 && b == 2)
	|| (a == 2 && b == 0))
		printf("win");
	else
		printf("lose");

	return 0;
}
