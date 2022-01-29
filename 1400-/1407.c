#include <stdio.h>
#include <string.h>
const int SIZE = 1000;

int main(){    
    char inpt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i;
    for (i = 0; i < strlen(inpt); i++) {
    	if (inpt[i] != ' ') {
    		printf("%c", inpt[i]);
		}
	}
 
    return 0;
}
