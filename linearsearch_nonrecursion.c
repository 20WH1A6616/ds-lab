#include<stdio.h>
int linearsearch(int[]  ,int ,int);
int main(){
     int a[30],n,i,x,p;
     printf("enter size of list: ");
     scanf("%d",&n);
     printf("elements of array: ");
     for(i=0;i<n;i++){
         scanf("%d" ,&a[i]);
      }
      printf("element to be searched : ");
      scanf("%d",&x);
      p = linearsearch(a,n,x);
      if(p == -1){
          printf("element not found");
       }
       else{
         printf('element found at position %d: ");
       }
     }
     int linearsearch(int a[],int n,int x){
         int i;
         for(i=0;i<n;i++){
            if(x == a[i]){
                return i;
                }
             }
          return -1;
        }
        
        
   output:
   enter size of list :3
   elements of array:2
   3
   1
   element to be searched : 3
   
   element found at position 1
   
   
   enter size of list :2
   elements of array:1
   2
   elements to be searched:3
   element not found
