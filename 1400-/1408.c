#include <stdio.h>
#include <string.h>
const int SIZE = 1000;

int main(){    
    char inpt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i;
    for (i = 0; i < strlen(inpt); i++) {
    	printf("%c", inpt[i] + 2);
	}
	
	printf("\n");
	
	for (i = 0; i < strlen(inpt); i++) {
    	printf("%c", (inpt[i] * 7) % 80 + 48);
	}
 
    return 0;
}
