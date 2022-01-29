#include <stdio.h>
const int SIZE = 100; // max size 

int main() 
{
    int n, c;
    scanf("%d %d", &n, &c);
    
    int arr[SIZE], i;
    for (i = 0; i < n; i++)
    	scanf("%d", &arr[i]);
	
	int j, temp;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
		if ((i + 1) % c == 0)
			printf("\n");
	}
     
    return 0; 
}  
