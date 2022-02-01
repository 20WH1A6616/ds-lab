#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int i,ele,top =-1.stack[SIZE];
void push(int ele){
    stack[++top] =ele;
}
int pop(){
    return(stack[top--]);
}

        
int peek(){
    return(stack[top])
    }
void display(){
    for(i=0;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}  
int main(){
    int ch;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.Display\n4.exit");
        printf("\nEnter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:if(top == SIZE-1){
                      printf("stack overflow");
                   }
                   else{
                    printf("Enter the element to inserted: ");
                    scanf("%d", &e);
                    push(e);
                   }
                    break;
            case 2:if(top == -1)
                    printf("stack undrflow");
                   }
                   else{
                    printf(deleted elememt is %d".pop());
                    }
                   break;
            case 3:if(top == -1){
                     printf("stack undeflow");
                    }
                   else{
                       printf("top element is %d",peek());
                    }
                     break;
                         
            case 4:if(top == -1){
                     printf("stack overflow");
                     }
                     else{
                         display()
                         }
                       break;    
              case 5:  exit(0);
                break;
        }
    }
}

output:
1-push
2-pop
3-peek
4-display
5-exit
enter your choice:1 
enter element to be inserted:5


1-push
2-pop
3-peek
4-display
5-exit                           
                           
enter your choice:1
element to be inserted :7


1-push
2-pop
3-peek
4-display
5-exit                           
enter your choice:3
5
7

