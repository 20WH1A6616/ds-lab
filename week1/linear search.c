#include<stdio.h>
int linear_search(int n,int a[n],int element){
         int pos = -1;
         for(int i = 0;i < n;i++){
             if(a[i] == element){
             pos = i;
             break;
             }
           }
        if(pos == -1)
         return -1;
       else
         return pos;
      }
  
  int main(){
  int n,pos,a[30],element,i;
  printf("enter the no. of elements in an array");
  scanf("%d",&n);
  printf("enter the array elements");
      for(i = 0;i < n;i++)
         scanf("%d",&a[i]);
  printf("enter the element to be searched");
  scanf("%d",&element);
  pos = linear_search(n,a,element);
      if(pos == -1)
         printf("element not found");
      else
         printf("element found at %d",pos + 1);
  }
output;
enter the no. of ele of an array4
enter the sorted array elements3
5
7
9
enter the element to be serched
