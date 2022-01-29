#include <stdio.h>
#include <string.h>
const int SIZE = 1000;

int main(){    
    char inpt[SIZE], oupt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i;
    for (i = strlen(inpt) - 1; i >= 0; i--) {
		printf("%c", inpt[i]);    	
	}
    return 0;
}
 
