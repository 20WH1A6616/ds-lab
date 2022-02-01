#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
typedef struct queue{
    int data;
    struct queue *link;
}node;
node *front = NULL, *rear = NULL;
int main(){
    while(1){
        int choice;
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}
void enqueue(){
    int ele;
    node *p = malloc(sizeof(node));
    printf("Enter element to be inserted : ");
    scanf("%d",&ele);
    p->data = ele;
    p->link = NULL;
    if(front == NULL && rear == NULL){
        front = p;
        rear = p;
    }
    else{
        rear->link = p;
        rear = p;
    }
}
void dequeue(){
    if(front == NULL && rear == NULL){
        printf("Underflow\n");
    }
    else if(front->link == NULL){
        node *t = front;
        printf("%d is to be deleted\n",t->data);
        front = NULL;
        rear = NULL;
        free(t);
    }
    else{
        node *t = front;
        front = front->link;
        printf("%d is to be deleted\n",t->data);
        free(t);
    }
}
void display(){
    if(front == NULL && rear == NULL)
        printf("Underflow\n");
    else{
        node *t = front;
        while(t != NULL){
            printf("%d\t",t->data);
            t = t->link;
        }
        printf("\n");
    }
}

output:
1-enqueue
2-dequeue
3-display
4-exit
enter your choice:1
enter element to be inserted:1


1-enqueue
2-dequeue
3-display
4-exit
enter your choice:1
enter element to be searched:3

1-enqueue
2-dequeue
3-display
4-exit
enter your choice:3
1
3
