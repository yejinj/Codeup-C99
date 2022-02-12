#include <stdio.h>

int main() {
	char str[101];
	
	int size;
	scanf("%d", &size);
	
	int i;
	for (i = 0; i < size; i++) {
		scanf("%s", str);
		printf("%s\n", str);
		
		if (i < size - 1) {
			printf("AMOLED\n");
		}
	}
	
	return 0;
}
