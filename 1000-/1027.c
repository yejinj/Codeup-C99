#include <stdio.h>

int main()
{
	float a, b, c;
	int d, e, f;
	scanf("%f %d\n%f %d\n%f %d", &a, &d, &b, &e, &c, &f);
	printf("%.01f", a*d + b*e + c*f);

	return 0;	
}