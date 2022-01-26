#include <stdio.h>

int main ()
{    
    const int SIZE = 5;
    
    int i, arr[SIZE];
    for (i = 0; i < SIZE; i++) {
    	scanf("%d", &arr[i]);
	}
	
	int j, tmp;
	for (i = 0; i < SIZE; i++) {
    	for (j = 0; j < SIZE - 1; j++) {
    		if (arr[j + 1] < arr[j]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	printf("%d\n%d", arr[SIZE - 1], arr[0]);
		
	return 0;
}
