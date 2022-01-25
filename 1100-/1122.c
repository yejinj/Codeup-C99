#include <stdio.h>

int main()
{
	int sec;
	scanf("%d", &sec);
	
	int min;
	min = 0;
	while (sec >= 60) {
		sec -= 60;
		min += 1;
	}
	
	printf("%d %d", min, sec);

	return 0;	
}
