#include<stdio.h>
   #include<stdlib.h>
   struct node{
         int data;
         struct node*link;
   
   };
   struct node*head = NULL,*cur,*temp;
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
  
  int main()
  {
    int ch;
    while(1){
      printf("1-create");
      printf("enter your choce");
      scanf("%d",&ch);
  
     switch(ch)
     {
       case 1:head = create();
              break;
       case 2:display(head);
             break;
       case 3:exit(0);
out put case 1;
cse@cselab:~/Desktop$ vim sll_list.c
cse@cselab:~/Desktop$ gcc sll_list.c
cse@cselab:~/Desktop$ ./a.out
1-create


-- INSERT --                      
