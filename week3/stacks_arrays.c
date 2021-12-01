 #include<stdio.h>
#include<stdlib.h>
#define size 5
int top =-1,stack[size];
void push(int ele){
   stack[++top]=ele;
   }
int pop(){
  return stack[top--];
  }
int peek(){
  return stack[top];
  }
void display(){
  for(int i=top;i>=0;i--)
  printf("%d\n",stack[i]);
  }
int main(){
  int ch;
  int ele;
  while(1){
  printf("\n1push\n2pop\n3peek\n4display\n5exit");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch){
     case 1:if(top==size-1)
               printf("stack overflow");
            else{
               printf("enter the element to be inserted");
               scanf("%d",&ele);
               push(ele);
               }
              break;
    case 2:if(top==-1)
             printf("stack underflow");
           else
             printf("top ele is %d",peek());
             break;
             
    case 3:if(top == -1)
              printf("stcak underflow");
           else
              printf("top ele is %d",peek());
              break;
    case 4:if(top == -1)
              printf("stack underflow");
           else
              break;
    case 5:exit(0);
    }
   }
 }  
out put;
cse@dbcselab:~/Desktop$ vim stacks.c
cse@dbcselab:~/Desktop$ gcc stacks.c
cse@dbcselab:~/Desktop$ .\a.out
.a.out: command not found
cse@dbcselab:~/Desktop$ ./a.out

1push
2pop
3peek
4display
5exitenter your choice1
enter the element to be inserted5

1push
2pop
3peek
4display
5exitenter your choice2
top ele is 5
1push
2pop
3peek
4display
5exitenter your choice4

1push
2pop
3peek
4display
5exitenter your choice3
top ele is 5
1push
2pop
3peek
4display
5exitenter your choice2
top ele is 5
1push
2pop
3peek
4display
5exitenter your choice4

1push
2pop
3peek
4display
5exitenter your choice^Z
[1]+  Stopped    
