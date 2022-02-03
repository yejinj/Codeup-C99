#include <stdio.h>

int nums1[1000], nums2[1000];
int main() {
	int a, b;
	int c = 0, d = 0;
	scanf("%d %d", &n1, &n2);
	
	int i;
	for (i = 0; i < a; i++)
		scanf("%d", &arr1[i]);
		
	for (i = 0; i < b; i++)
		scanf("%d", &arr2[i]);
		
	for (i = 0; i < a + b; i++) {
		if (c < a)
			if (arr1[c] <= arr2[d] || d >= b) {
				printf("%d ", arr1[c]);
				c ++;
				continue;
			}
			
		printf("%d ", arr2[d]);
		d ++;
	}
	
	return 0;
}
