#include <stdio.h>

int main()
{
	char str[100];
	gets(str);
    
    int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ',')
			printf(" ");
		else if (str[i] == ' ')
			printf("");
		else if (str[i] == ';')
			printf("\n");
		else
			printf("%c", str[i]);

		if(str[i + 1] == '\0')
			printf(" ");
	}

	return 0;
}
