#include<stdio.h>
#include<stdlib.h>
int a[10], front = -1, rear=-1;
void enqueue(int ele){
    int size;
    if(front==-1&&rear==-1){
        front=rear=0;
        a[front] = ele;
    }
    else if(rear<size-1){
        rear++;
        a[rear]=ele;
    }
    else{
        printf("Stack is full, overflow");
    }
}
void dequeue(){
    if((front==-1&&rear==-1)||(rear<front)){
        printf("Stack is empty, Underflow");
    }
    else{
        printf("%d\n", front);
        printf("%d is deleted",a[front++]);
    }
}
void display(){
    if((front==-1&&rear==-1)||(rear<front)){
        printf("Stack is empty, Underflow");
    }
    else{
        printf("%d\n", front);
        for(int i=front; i<=rear; i++){
            printf("%d\t", a[i]);
        }
    }
}
int main(){
    int ch, e, term;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.Display\n4.exit");
        printf("\nEnter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("Enter the element to inserted: ");
                scanf("%d", &e);
                dequeue(e);
                break;
            case 2:
                enqueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
    }
}

output:
1-enqueue
2-dequeue
3-display
4-exit
enter your choice:1 
enter element to be inserted:5


1-enqueue
2-dequeue
3-display
4-exit
enter your choice:1
element to be inserted :7


1-enqueue
2-dequeue
3-display
4-exit
enter your choice:3
5
7
