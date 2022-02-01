#include<stdio.h>
int linearSearch(int [], int, int);
int main(){
     int a[30],n,i,x,p;
     printf("enter size of list: ");
     scanf("%d",&n);
     printf("elements of array: ");
     for(i =0;i<n;i++){
         scanf("%d",&a[i]);
      }
      printf("element to be searched: ");
      scanf("%d",&x);
      p = linearsearch1(a,n,x);
      if(p == -1){
         printf("element not found: ");
        }
        else{
           printf("element found at position %d: ",p);
          }
      }
     int i=0;
     int linearsearch1(int a[],int n, int x){
          if(a[i]==x){
              return i;
          }
          if(i<n){
             i++;
             linearsearch1(a,n,x);
             
            }
            if(i>=n){
                  return -1;
                  
                 }
             }
             
             
    output:
    enter size of list: 3
    enter of array:1
    2
    3
    element to be searched: 3
    element found at position 2
    
    
    enter size of list:3
    elements of array: 1
    2
    3
    element to be searched : 4
    element not found
    

