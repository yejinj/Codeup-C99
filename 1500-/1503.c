#include <stdio.h>

int main(void)
{
    int arr[101][101] = {};   
    
	int a;
	scanf("%d", &a);
	
	int i, j;
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			if (i % 2 == 1) {
				arr[i][j] = a * (i - 1) + j;
			}
			
			else {
				arr[i][j] = a * i - j + 1;
			}
		}
	}
	
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
    
    return 0;
}
