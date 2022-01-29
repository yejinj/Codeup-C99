#include <stdio.h>
#include <string.h>
const int SIZE = 100;

int main(){    
    char inpt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i, c_count = 0, cc_count = 0;
    for (i = 0; i < strlen(inpt); i++) {
		if (inpt[i] == 'c' || inpt[i] == 'C')
			c_count++;	
		if ((inpt[i] == 'c' || inpt[i] == 'C')
		&& (inpt[i + 1] == 'c' || inpt[i + 1] == 'C'))
			cc_count++;
	}
	
	printf("%d\n%d", c_count, cc_count);
	
    return 0;
}
 
