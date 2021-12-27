#include<stdio.h>
#include<stdlib.h>
void insert_front();
void insert_end();
void delete_front();
void delete_end();
void display();
typedef struct doubly_linked_list{
    int data;
       struct doubly_linked_list *next;
       struct doubly_linked_list *prev;
}node;
node *head=NULL;
int main(){
     int ch;
     while(1){
        printf("enter choice:\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
               insert_front();
               break;
            case 2:
               insert_end();
               break;
            case 3:
               delete_front();
               break;
            case 4:
               delete_end();
               break;
            case 5:
               display();
               break;
            case 6:
               exit(0);
     }
     }
     }
void insert_front(){
    int x;
    node*p=malloc(sizeof(node));
    printf("enter the element:");
    scanf("%d",&x);
    p->data=x;
    if(head==NULL){
        p->next=p->prev=NULL;
        head=p;
    }
    else{
        p->next=head;
        p->prev=NULL;
        head->prev=p;
        head=p;
   }
}
void delete_end(){
    node *t = head;
    node *t2;
    if(head == NULL){
        printf("UNDERFLOW\n");
    }
    else if(t->next == NULL){
        head = NULL;
        printf("%d is deleted\n", t->data);
        free(t);
    }
    else{
        while(t->next->next != NULL){
            t = t->next;
        }
        t2 = t->next;
        printf("%d is deleted\n", t2->data);
        free(t2);
        t->next = NULL;
    }
}
void display(){
   node *t=head;
   printf(" DISPLAY\n");
   if(head == NULL){
   printf(" EMPTY\n");
   }
   else{
   while(t !=NULL){
   printf("%d\n",t->data);
   t = t -> next;
   }
   }
   }
