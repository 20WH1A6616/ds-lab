#include<stdio.h>
int linear_search(int arr[], int value, int index, int n)
{
        int pos = 0;
        if(index >= n)
        {
                return 0;
        }
        else if (arr[index] == value){
                pos = index + 1;
                return pos;
        }
        else
        {
                linear_search(arr, value, index+1, n);
        }
        return pos;
}

int main()
{
        int n, arr[30], pos, value, m = 0,i ;
        printf("enter the size of the array\n");
        scanf("%d", &n);
        printf("enter the elements of the array\n");
        for(i = 0 ; i<n ; i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("enter the element to be found");
        scanf("%d", &value);
        pos = linear_search(arr, value, 0, n); 
        if(pos != 0)
        {
                printf ("element found at pos %d", pos);
        }
        else
        {
                printf("element not found\n");
        }
        return 0;
}
