#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[100], count;
    count = 0;
    
    while (1) {
    	scanf("%d", &arr[count]);
    	if (arr[count] == 0) {
    		break;
		}    	
    	count++;
	}
	
	int i;
	for (i = 0; i < count; i++) {
    	if (arr[i] != 0)
			printf("%d\n", arr[i]);
			
		else
			break;
	}
	
	return 0;
}
