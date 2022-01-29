#include <stdio.h>
#include <string.h>
const int SIZE = 10;

int main(){    
    int arr[SIZE];
    
    int i, om = 0, em = 0;
    for (i = 0; i < SIZE; i++) {
    	scanf("%d", &arr[i]);
    	if (arr[i] % 2 == 1 && arr[i] > om)
    		om = arr[i];
    		
    	else if (arr[i] % 2 == 0 && arr[i] > em)
    		em = arr[i];
	}
	
	if (om != 0 && em != 0)
		printf("%d %d", om, em);
	else if (om != 0 && em == 0)
		printf("%d", om);
	else if (om == 0 && em != 0)
		printf("%d", em);
	
    return 0;
}
 
