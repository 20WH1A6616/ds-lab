#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};
struct node*head = NULL,*cur,*temp,*t1;

struct node*create(){
    int n;
    printf("Enter the no.of nodes: ");
    scanf("%d",&n);
    while(n--){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&cur->data);
        cur->link = NULL;
        if(head == NULL){
            cur->link = cur;
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != head){
                temp = temp->link;
            }
            temp->link = cur;
            cur->link = head;
        }
    }
    return head;
};

struct node*insert_begin(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    head = cur;
    return head;
};

struct node*insert_end(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    return head;
};

struct node*insert_pos(int pos,int ele){
    int c = 1;
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    while(c < pos-1){
        temp = temp->link;
        c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
};

struct node*delete_begin(struct node*head){
    temp = head;
    t1 = head;
    while(temp->link != head){
        temp = temp->link;
    }
    printf("Deleted element is %d",t1->data);
    head = t1->link;
    temp->link = head;
    free(t1);
    return head;
};

struct node*delete_end(struct node*head){
    temp = head;
    while(temp->link != head){
        t1 = temp;
        temp = temp->link;
    }
    t1->link = head;
    printf("Deleted element is %d",temp->data);
    free(temp);
    return head;
};

struct node*delete_pos(struct node*head,int pos){
    int c = 1;
    temp = head;
    while(c < pos){
        t1 = temp;
        temp = temp->link;
        c++;
    }
    t1->link = temp->link;
    printf("Deleted element is %d",temp->data);
    free(temp);
    return head;
};

void display(struct node*head){
    temp = head;
    do{
        printf("%d ",temp->data);
        temp = temp->link;
    }while(temp!=head);
}

void reverse_display(struct node*head){
    if(head->link == temp){
        printf("%d ",head->data);
    }
    if(head->link!= temp){
        reverse_display(head->link);
        printf("%d ",head->data);
    }
}

int main(){
    int ch, pos, ele, key;
    while(1){
        printf("\n1-create\n2-insert_begin\n3-insert_end\n4-insert_pos\n5-delete_begin\n6-delete_end\n7-delete_pos\n8- display\n9-reverse_display\n10-exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            head = create();
            break;
        case 2:
            scanf("%d", &ele);
            head= insert_begin(ele);
            break;
        case 3:
            scanf("%d", &ele);
            head= insert_end(ele);
            break;
        case 4:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter element: ");
            scanf("%d", &ele);
            head= insert_pos(pos,ele);
            break;
        case 5:
            head= delete_begin(head);
            break;
        case 6:
            head = delete_end(head);
            break;
        case 7:
            printf("Enter position: ");
            scanf("%d", &pos);
            head= delete_pos(head,pos);
            break;
        case 8:
            display(head);
            break;
        case 9:
            reverse_display(head);
            break;

        case 10:
            exit(0);
        }
    }
}
output:
1-insert-fornt
2-insert-end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice :1
enter the element to be searched:10

1-insert-front
2-insert-end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:1
enter the element to be inserted:20

1-insert-front
2-insert-end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:1
enter element to be searched:20
1-insert-front
2-insert-end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:40

1-insert -front
2-insert--end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:3
10 20 20 40


1-insert -front
2-insert--end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:4
20 is deleted


1-insert -front
2-insert--end
3-display
4-delete-front
5-delete-end
6-exit
enter your choice:5
40 is deleted
