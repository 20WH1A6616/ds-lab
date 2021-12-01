#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node*link;
  };
struct node*top = NULL,*cur,*temp;
void push(int ele){
     cur = (struct node*)malloc(sizeof(struct node));
     cur->data = ele;
     cur->link=NULL;
     if(top == NULL)
        cur->link = NULL;
     else
        cur->link = top;
        
        top = cur;
     }
int pop(){
   temp = top;
   if(top ==NULL)
     printf("stack is overflow");
   else{
     top = top->link;
     return temp->data;
   
    free (temp);
  }
}  
int peek(){
     return top->data;
}
void display(){
     temp = top;
     while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->link;
     }
}
int main(){
    int ch;
    int ele;
    while(1){
    printf("1-push\n2-pop\n3-peek\n4-display\n5-exit");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch){
       case 1:printf("enter element");
              scanf("%d",&ele);
              push(ele);
              break;
       case 2:printf("deleted element is %d",pop());
              break;
       case 3:if(top == NULL)
                printf("stack underflow");
              else
                printf("topmost ele %d",peek());
              break;  
       case 4:if(top == NULL)
                printf("stack underflow");
              else
                display();
              break;
       case 5:exit(0);
     }
   }
}  
output;
cse@dbcselab:~/Desktop$ gcc stacks_SLL.c
cse@dbcselab:~/Desktop$ ./a.out
1-push
2-pop
3-peek
4-display
5-exitenter your choice5
cse@dbcselab:~/Desktop$ ./a.out
1-push
2-pop
3-peek
4-display
5-exitenter your choice1
enter element4
1-push
2-pop
3-peek
4-display
5-exitenter your choice1
enter element5
1-push
2-pop
3-peek
4-display
5-exitenter your choice1
enter element6
1-push
2-pop
3-peek
4-display
5-exitenter your choice4
6
5
4
1-push
2-pop
3-peek
4-display
5-exitenter your choice2
deleted element is 61-push
2-pop
3-peek
4-display
5-exitenter your choice3
topmost ele 51-push
2-pop
3-peek
4-display
5-exitenter your choice4
5
4
1-push
2-pop
3-peek
4-display
5-exitenter your choice^Z
[3]+  Stopped   
