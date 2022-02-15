#include <stdio.h>

int main() {
	int arr[1001];
	int s;
	scanf("%d", &s);
	
	int i;
	for (i = 0; i < s; i++)
		scanf("%d", &arr[i]);
	
	int j, order;	
	for (i = 0; i < s; i++) {
		printf("%d ", arr[i]);
		order = 1;
		for (j = 0; j < s; j++)
			if (arr[i] < arr[j])
				order++;
		printf("%d\n", order);
	}
	
	return 0;	
}
