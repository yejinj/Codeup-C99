#include <stdio.h>
#include <string.h>
const int SIZE = 1000;

int main(){    
    char inpt[SIZE], oupt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i;
    for (i = 0; i < strlen(inpt); i++) {
    	if (inpt[i] != ' ') {
    		if (inpt[i] == 'x')
    			inpt[i] = 'a';
    		
	    	else if (inpt[i] == 'y')
	    		inpt[i] = 'b';
	    		
	    	else if (inpt[i] == 'z')
	    		inpt[i] = 'c';
		
			else
				inpt[i] += 3;
		}
	}
	
	printf("%s", inpt);
 
    return 0;
}
 
