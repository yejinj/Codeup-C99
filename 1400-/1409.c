#include <stdio.h>
#include <string.h>
const int SIZE = 10;

int main(){    
    int arr[SIZE];
    
    int i, n;
    for (i = 0; i < SIZE; i++) {
    	scanf("%d", &arr[i]);
	}
	
	scanf("%d", &n);
	printf("%d", arr[n - 1]);
 
    return 0;
}
