#include <stdio.h>

void sort(int arr[], int size)
{
    int temp;

	int i, j;
    for (i = 0; i < size; i++)
    	for (j = 0; j < size - 1; j++)
        	if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main()
{
    int arr[3];
    
    int i;
    for (i = 0; i < 3; i++)
    	scanf("%d", &arr[i]);
 
    sort(arr, (sizeof(arr) / sizeof(int)));

	int j;
    for (j = 0; j < 3; j++)
    	printf("%d ", arr[j]);

    return 0;
}
