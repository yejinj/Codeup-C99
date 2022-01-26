#include <stdio.h>

int main ()
{    
    const int SIZE = 3;
    int arr[SIZE];
    
    int i, cnt = 0;
    for (i = 0; i < SIZE; i++) {
    	scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < SIZE; i++) {
    	if (arr[i] <= 170) {
    		printf("CRASH %d", arr[i]);
    		cnt ++;
			break;	
		}
	}
	
	if (cnt == 0)
		printf("PASS");	
    
    return 0;
}
