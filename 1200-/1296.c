#include<stdio.h>
int main() {
	int n;
	float height, weight;
	scanf("%d", &n);

	//세로 한 변
	height = (int)(n / 4);
	//가로 한 변
	weight = ((n - height * 2) / 2);
	printf("%d", (int)(height * weight));
}
