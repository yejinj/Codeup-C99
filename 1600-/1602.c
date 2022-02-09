#include <stdio.h>
double absolute_v(double n) {
	if (n >= 0)
		return n;
	else
		return (-n);
}
 
int main()
{
    double n;
    scanf("%lf", &n);
    
    printf("%.10g", absolute_v(n));
    
    return 0;
}
