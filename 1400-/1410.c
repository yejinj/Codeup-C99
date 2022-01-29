#include <stdio.h>
#include <string.h>
const int SIZE = 100000;

int main(){    
    char ch[SIZE];
    scanf("%s", ch);
    
    int i, lc = 0, rc = 0; // left count, right count
    for (i = 0; i < strlen(ch); i++) {
    	if (ch[i] == '(') {
    		lc ++;
		}
		
		if (ch[i] == ')') {
    		rc ++;
		}
	}
	
	printf("%d %d", lc, rc);
 
    return 0;
}
