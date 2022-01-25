#include<stdio.h>
 
int main(void)
{
    int arr[3];
    
    int i, min;
    for (i = 0; i < 3; i++) {
    	scanf("%d", &arr[i]);
    	if (i == 0)
    		min = arr[i];
    	else if (arr[i] < min)
    		min = arr[i];
	}
	
	printf("%d", min);
		
	return 0;
}
