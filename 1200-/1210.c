#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int sum = 0;
	if (a == b) {
		if (a == 1)
			sum = 2 * 400;
		if (a == 2)
			sum = 2 * 340;
		if (a == 3)
			sum = 2 * 170;
		if (a == 4)
			sum = 2 * 100;
		if (a == 5)
			sum = 2 * 70;
			
		if (sum > 500) {
			printf("angry");
			return 0;	
		}
		else {
			printf("no angry");
			return 0;	
		}
	}

	if (a == 1 || b == 1)
		sum += 400;
	if (a == 2 || b == 2)
		sum += 340;
	if (a == 3 || b == 3)
		sum += 170;
	if (a == 4 || b == 4)
		sum += 100;
	if (a == 5 || b == 5)
		sum += 70;
		
	if (sum > 500)
		printf("angry");
	else
		printf("no angry");
		
	
	return 0;	
}
