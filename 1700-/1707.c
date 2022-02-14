#include <stdio.h>

int main() {
	int arr[10];
	
	int i;
	float mean = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		mean += (arr[i] / 10.0);
	}
	
	int c = 0;
	for (i = 0; i < 10; i++)
		if (arr[i] >= mean)
			c++;
			
	printf("%.1f\n%d %d", mean, c, 10 - c);
	
	return 0;	
}
