 #include<stdio.h>
   #include<stdlib.h>
    struct node{
            int data;
            struct node*link;
   
      };
      struct node*head = NULL,*cur,*temp,*temp1;
      struct node*create(){
       int n;
       printf("enter the no of nodes");
       scanf("%d",&n);
       while(n--){
         cur=(struct node*)malloc(sizeof(struct node));
         printf("enter the data elements");
         scanf("%d",&(cur->data));
         cur->link = NULL;
       }
       if(head==NULL)
          head=cur;
  
        else{
          temp=head;
          while(temp->link!=NULL){
            temp=temp->link;
            temp->link=cur;
           }
         }
    return head;
  
    }
  
    void display(struct node*head)
    {
      temp = head;
      while(temp!=NULL)
      {
      printf("%d",temp->data);
        temp=temp->link;
       }
    }
  
   struct node*insert_position(int pos,int ele)
    {
     int c = 1;
     cur = (struct node*)malloc(sizeof(struct node));
     cur->data = ele;
     temp = head;
     while(c<pos-1)
   {
     temp = temp->link;
     c++;
   }
    cur->link = temp->link;
    temp->link = cur;
   return head;
   }
  
  
  struct node*delete_begin(struct node*head)
  {
    temp = head;
    head = temp->link;
    printf("deleted element %d",temp->data);
    free(temp);
  return head;
  }
  
  
  
  struct node*delete_end(struct node*head)
  {
   {
    temp = head;
    while(temp->link!=NULL)
    {
      temp1 = temp;
      temp = temp->link;
      temp1->link =NULL;
    printf("deleted ele %d",temp->data);
    free(temp);
  return head;
     }
  }
  
  
  int search(struct node*head,int key)
  {
    int c = 1;
    temp = head;
    while(temp!=NULL)
  {
    if(key = temp->data)
     {
       return c;
    }
     temp=temp->link;
     c++;
   }
   return -1;
 }
 
 void sorting(struct node*head)
 {
   int c,t;
   struct node* ptr = NULL;
   do
 {
   temp = head;
-- INSERT --                                                                                                                92,1          50%
  c = 0;
   while(temp->link=ptr)
 {
   if(temp->data > temp->link->data)
 {
    t = temp->data;
    temp->data = temp->link->data;
     temp->link->data=t;
     c = 1;
   }
  temp = temp->link;
   }
  ptr = temp;
  }
 while(c);
 }
 
  
 
 
 
 
 
 
  int main()
   {
     int ch,ele,pos,key;
     while(1){
       printf("1-create\n,2-insert_begin\n,3-insert_end\n,4-insert_position\n,5-delete_begin\n,6-delete_end\n,7-search\n,8-sort");
       printf("enter your choce");
       scanf("%d",&ch);
 
      switch(ch)
      {
        case 1:head = create();
 break;
        case 2:display(head);
               break;
 
        case 3 :printf("enter your pos");
                scanf("%d",&pos);
                printf("enter ele");
                scanf("%d", &ele);
                head = insert_position(pos,ele);
                  break;
        case 4:printf("enter ele");
               scanf("%d",&ele);
               head = delete_begin(head);
                break;
        case 5:printf("enter ele");
               scanf("%d",&ele);
               head = delete_end(head);
                break;
        case 6:printf("enter key");
               scanf("%d",&key);
               pos = search(head,key);
                if(pos==-1)
                  printf("element not found ");
                else
                  printf("element found ");
                break;
        case 7:sorting(head);
              break;
        case 8:exit(0);
    }
 
   }
 }
 
cse@cselab:~/Desktop$ gcc insertion.c
cse@cselab:~/Desktop$ ./a.out
1-create
,2-insert_begin
,3-insert_end
,4-insert_position
,5-delete_begin
,6-delete_end
,7-search
,8-sort

-- INSERT --                                                                                                                72,1          24%

