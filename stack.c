// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h> 
struct node
{
    int data;
    struct node *next;
}; 
struct node *head=NULL;
struct node *newnode;
void push();
void pop();
void display();
void main()
{
    int ch;
    
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
            default:printf("wrong choice");
                
        }
    }
}
void push()
{
    int val;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory is not allocated");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&val);
        if(head==NULL)
       {
        newnode->data=val;
        newnode->next=NULL;
        head=newnode;
       }
       else
       {
          newnode->data=val;
          newnode->next=head;
          head=newnode;
       }
    }
    printf("item push");
}
void pop()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\n%d is deleted",head->data);
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
      }
  }

}