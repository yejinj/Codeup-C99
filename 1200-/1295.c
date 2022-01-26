#include <stdio.h>

int main() {
	char input[1000] = "";
	char output[1000] = "";
	
	scanf("%s", input);
	
	int i;
	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 65 && input[i] <= 90) {
			output[i] = input[i] + 32;
		}
		
		else if (input[i] >= 97 && input[i] <= 122) {
			output[i] = input[i] - 32;
		}
		
		else {
			output[i] = input[i];
		}
	}
	
	printf("%s", output);
	
	return 0;
} 
