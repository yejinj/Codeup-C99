#include <stdio.h>
#include <string.h>
const int SIZE = 11; // 배열 최대 사이즈 

int main(){
	char inpt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i;
    for (i = 0; i < strlen(inpt); i++) {
    	if (inpt[i] == 't') {
    		printf("%d ", i + 1);
		}
	}
	
    return 0;
}
 
