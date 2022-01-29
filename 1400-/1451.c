#include<stdio.h>
const int SIZE = 10001;
int main()
{
    int arr[SIZE], size;
    scanf("%d", &size);
    
    int i;
    for (i = 0; i < size; i++) {
    	scanf("%d", &arr[i]);
	}
	
	int j, temp;
	for (i = 0; i < size; i++) {
    	for (j = 0; j < size - 1; j++) {
    		if (arr[j] > arr[j + 1]) {
    			temp = arr[j];
    			arr[j] = arr[j + 1];
    			arr[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < size; i++) {
    	printf("%d\n", arr[i]);
	}
	
    return 0;
}

