/*stack operation-linked list*/
#include<stdio.h>
#include<conio.h>
struct Node
{
int data;
struct Node *next;
}
*top=NULL;
void push(int);
void pop();
void display();
void main()
{
int choice,value;
clrscr();
printf("\n stack using linked list");
while(1)
{
printf("\n****MENU***");
printf("1.push \n2.pop \n3.diplay \n4.exit \n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the value to be inserted");
       scanf("%d",&value);
       push(value);
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(0);
default:
printf("\n wrong selection ! please try again");
}
}
}
void push(int value)
{
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
if(top==NULL)
newNode->next=NULL;
else
newNode->next=top;
top=newNode;
printf("\n insertion is success!");
}
void pop()
{
if(top==NULL)
printf("\n stack is empty!");
else
{
struct Node *temp=top;
printf("\n deleted element:%d",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
printf("stack is empty!");
else
{
struct Node *temp=top;
while(temp->next!=NULL)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d--->NULL",temp->data);
}
}