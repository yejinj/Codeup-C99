#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[100];
    
    int size;
    scanf("%d", &size);
    
    int i;
    for (i = 0; i < size; i++) {
    	scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < size; i++) {
    	printf("%d\n", arr[i]);
	}
	
	return 0;
}
