#include <stdio.h>
#include <string.h>
const int SIZE = 101; // 배열 최대 사이즈 

int main(){
	char inpt[SIZE];
    scanf("%[^\n]s", inpt);
    
    int i, cnt = 0;
    for (i = 0; i < strlen(inpt); i++) {
    	if (inpt[i] == 'l'
		&& inpt[i + 1] == 'o'
		&& inpt[i + 2] == 'v'
		&& inpt[i + 3] == 'e') {
    		cnt++;
		}
	}
	
	printf("%d", cnt);
	
    return 0;
}
 
