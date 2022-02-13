#include <stdio.h>
int f(int n)
{
	int num = 0;
	while (n > 0) {
		num *= 10;
		num += n % 10;
		n /= 10;
	}
	
	return num;
}

int main( void)
{

	int inpt;
	scanf("%d", &inpt);
	
	int ans = inpt + f(inpt);
	if (f(ans) == ans)
		printf("YES");	
	else
		printf("NO");
	
	return 0;

}
