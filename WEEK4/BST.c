 #include<stdio.h>
  #include<stdlib.h>
   
   struct node
   {
     int data;
     struct node*left;
     struct node*right;
   };
  struct node* root = NULL,*cur,*temp;
  struct node* create()
  {
   cur = (struct node*)malloc(sizeof(struct node));
   scanf("%d",&cur->data);
   cur->left = NULL;
   cur->right = NULL;
   if(root == NULL)
       root = cur;
    else
    {
      temp = root;
      while(temp!=NULL)
       {
         if(cur->data < temp->data && temp->left == NULL)
          {
             temp->left = cur;
             return root;
          }
         else if(cur->data < temp->data && temp->left != NULL)
         {
            temp = temp->left;
          }
         else if(cur ->data > temp->data && temp->right == NULL)
         {
            temp->right = cur;
            return root;
          }
     }
        else if(cur->data > temp->data && temp->right!=NULL)
         {
          temp = temp->right;
        }
     }
   }
  return root;
  };
  
  
 void preorder(struct node*root)
  {
     if(root!=NULL)
   {
       printf("%d",root->data);
       preorder(root->left);
       preorder(root->right);
    }
  }
  
  void inorder(struct node*root)
  {
     if(root!=NULL) {
          inorder(root->left);
          printf("%d",root->data);
          inorder(root->right);
    }
  }
  
  void postorder(struct node*root)
  {
    if(root!=NULL)
    {
      postorder(root->left);
      postorder(root->right);
      printf("%d",root->data);
       }
  }
  int main()
  {
    int ch;
    while(1)
  {
    printf("1-create\n,2-preorder\n,3-inorder\n,4-postorder\n,exit\n");
    printf("enter ur choice");
    scanf("%d",&ch);
    switch(ch)
  {
          case 1:
              create();
              break;
          case 2:
              preorder(root);
              break;
          case 3:
              inorder(root);
               break;
          case 4:
              postorder(root);
              break;
          case 5: exit(0);
  
    }
  }
 }
out put:
cse@cselab:~/Desktop$ vim binary_tree.c
cse@cselab:~/Desktop$ gcc binary_tree.c
cse@cselab:~/Desktop$ ./a.out
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice2
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice3
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
1
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
12344556
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
2
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
10
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
34
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
66
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
12
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
5
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
71
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice1
52
1-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice2
112344556210534126652711-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice3
125101234526671123445561-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice4
512527166341021234455611-create
,2-preorder
,3-inorder
,4-postorder
,exit
enter ur choice^Z
[1]+  Stopped                 ./a.out
cse@cselab:~/Desktop$ vim binary_tree.c
cse@cselab:~/Desktop$ 


                          
"binary_tree.c" 103L, 1758B                                                                                                 1,1           Top

