#define size 5
int front=-1,rear=-1,a[size];
void enqueue(int ele)
{
    a[++rear]=ele;
      if(front==-1)
          front = 0;
}

int dequeue()
{
        if(front == rear)
        {
          return a[front];
          front=rear=-1;
          }
        else{
                return a[front];
                front++;
        }

}
void display()
{
  for(int i=front;i<=rear;i++)
    printf("%d\n",a[i]);
}
int main()
{
        int ch;
        int ele;
        while(1)
         {
            printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");
            printf("enter your choice");
            scanf("%d",&ch);
        switch(ch)
        {
           case 1:if(rear == size-1)
                    printf("queue is overflow");
                  else{
                    printf("enter ele to be deleted");
                    scanf("%d",&ele);
                    enqueue (ele);
-- INSERT --    }
                  break;
          case 2:if(front=-1)
                  printf("queue underflow");
                 else{
                  printf("deleted element is %d",dequeue());
                  }
                  break;
          case 3:if(front == -1)
                  printf("queue is empty");
                 else{
                  display();
                  }
                  break;
          case 4: exit(0);
           }
         }
}
                                                                                                                                         41,30-37       8%
Out put;
(base) cse@cselab8-03:~/Desktop$ vim queuearrays.c
(base) cse@cselab8-03:~/Desktop$ gcc queuearrays.c
(base) cse@cselab8-03:~/Desktop$ ./a.out
1-enqueue
2-dequeuedisplay
4-exit
enter your choice1^Z
[1]+  Stopped                 ./a.out
(base) cse@cselab8-03:~/Desktop$ vim queuearrays.c
(base) cse@cselab8-03:~/Desktop$ gcc queuearrays.c
(base) cse@cselab8-03:~/Desktop$ ./a.out
1-enqueue
2-dequeue
3-display
4-exit
enter your choice4
(base) cse@cselab8-03:~/Desktop$ gcc queuearrays.c
(base) cse@cselab8-03:~/Desktop$ ./a.out
1-enqueue
2-dequeue
3-display
4-exit
enter your choice1
enter ele to be deleted2
1-enqueue
2-dequeue
3-display
4-exit
enter your choice3
2
1-enqueue
2-dequeue
3-display
4-exit
enter your choice2
queue underflow1-enqueue
2-dequeue
3-display
4-exit
enter your choice3
queue is empty1-enqueue
2-dequeue
3-display
4-exit
enter your choice2
queue underflow1-enqueue
2-dequeue
3-display
4-exit
enter your choice1
enter ele to be deleted4
1-enqueue
2-dequeue
3-display
4-exit
enter your choice26
1-enqueue
2-dequeue
3-display
4-exit
enter your choice^Z
[2]+  Stopped                 ./a.out
(base) cse@cselab8-03:~/Desktop$ vim queuearrays.c
(base) cse@cselab8-03:~/Desktop$

