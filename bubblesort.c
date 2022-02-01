#include<stdio.h>
void bubble_sort(int [],int);
int main(){
    int a[30], n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("\nEnter elements:");
    for(i = 0; i< n ;i++){
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
}
void bubble_sort(int a[], int n){
    int i,j,t;
    for(j = n-1;j>0;j--){
        for(i = 0;i<j;i++){
            if(a[i] > a[i+1]){
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    printf("\nSorted array:");
    for(i = 0;i<n;i++){
        printf("%d\n", a[i]);
    }
}

output:
enter size of an array:5
enter elements:10 50 15 2 30
sorted array:2
  10
  15
  30
  50
  enter size of an array:6
  enter elements:45 100 50 60 15 10
  sorted array:10
    15
    50
    60
    100
    
  
