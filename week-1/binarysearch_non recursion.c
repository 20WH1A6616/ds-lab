#include<stdio.h>
int binarysearch(int[],int,int);
int main(){
    int a[30],n,i,x,p;
    printf("enter size of list: ");
    scanf("%d",&n);
    printf("enter %d elements: ");
    for(i = 0;i < n;i++){
          scanf("%d",&a[i]);
    }
    printf("element to be searched: ");
    scanf("%d",&x);
    p  = binarysearch(a,n,x);
    if(p == -1){
         printf("element not found: ");
     }
     else{
         printf("element found at %d position: ",p);
        }
   }
   int binarysearch(int a[],int n,int x){
          int beg = 0,end=n-1,mid;
          while(beg<=end){
                mid=(beg +end)/2;
                if(x<a[mid])
                    end = mid-1;
                else if(x>a[mid]);
                     beg = mid+1;
                else
                     return mid;
                  
           }
          return -1;
         
    }
    
    
    
 output:
 enter size of list: 3
 enter 3 elements:1
 2
 3
 element to be searched:2
 element found at 1 position
 
 
 enter size of list:2
 enter 2 elements:2
 3
 element to be searched:4
 
 element not found
                
