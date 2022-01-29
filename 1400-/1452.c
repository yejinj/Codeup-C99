#include <stdio.h>
void quick(int n[], int size);
void sort(int n[], int low, int high);
  
int main()
{
    int arr[100000] = {0};
    int i, j, c, temp = 0;
  
    scanf("%d", &c);
    for(i = 0; i < c; i++)
		scanf("%d", &arr[i]);
  
    quick(arr, c);
  
    for(i = 0; i < c; i++)
		printf("%d\n", arr[i]);
}
  
void quick(int n[], int size)
{
    sort(n, 0, size-1);
}
  
void sort(int n[], int low, int high)
{
    int pivot, left, right;
    left = low;
    right = high;
    pivot = n[low];
  
    while(low < high)
    {
        while((n[high] >= pivot) && (low < high))
            high--;
  
        if(low != high)
        {
            n[low] = n[high];
        }
  
        while((n[low] <= pivot) && (low < high))
            low++;
  
        if(low != high)
        {
            n[high] = n[low];
            high--;
        }
    }
  
    n[low] = pivot;
    pivot = low;
    low = left;
    high = right;
  
    if(left < pivot)
		sort(n, low, pivot-1);
    if(right > pivot)
		sort(n, pivot+1, high);
}
