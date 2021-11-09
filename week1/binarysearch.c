#include<stdio.h>
int binary_search(int n,int a[n],int element){
int low = 0,high = n - 1,mid;
mid = (low + high) / 2;
while(low <= high){
   mid = (low + high) / 2;
   if(a[mid] < element)
         low = mid + 1;
   if(a[mid] > element)
         high = mid -1;
   if(a[mid] == element)
         return mid;
}
return -1;
}
int main(){
int n,i,a[20],low,high,mid;
int element,pos;
printf("enter the no. of ele of an array");
scanf("%d",&n);
printf("enter the array elements");
for(i = 0;i < n;i++)
   scanf("%d",&a[i]);
printf("enter the element to be searched");
scanf("%d",&element);
pos = binary_search(n,a,element);
if(pos == -1)
  printf("element not found");
else
  printf("element found at %d",pos);
}
out put:
enter the no of elements5
enter the array element1
2
3
4
5
enter the element to be searched4
element  found at 4
out put:
enter the no of elements4
enter the array elements1
2
4
7
enter the element to be serarched6
element not found
  
