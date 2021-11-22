# include<stdio.h>
int binary_search(int arr[], int low, int high, int k)
{
    int mid;
    if(low > high)
        return -1;
    mid = (low + high)/2;
    if (k == arr[mid])
        return mid;
    else if (k < arr[mid])
        binary_search(arr, low, mid-1, k);
    else
        binary_search(arr, mid+1, high, k);
}
void main()
{
    int arr[50], n, i, k;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter the sorted elements\n");
    for (i = 0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("enter the element to be searched");
    scanf("%d", &k);

    i = binary_search(arr, 0, n-1, k);/* 0 starting element index and n-1 last element index */

    if(i != -1)
        printf("\n element found at index %d", i + 1);
    else
        printf("\n element not found");

/* input:
enter the size of array
5
enter the sorted elements
1
2
3
4
5
enter the element to be searched
3

output:
element found at index 3

input:
enter the size of array 
5
enter the sorted elements
11
22
33
44
55
enter the element to be searched
77

output:
element not found  */


