#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
char ch;
int choice;
int stack[MAX];
void push();
void pop();
void traverse();
void main()
{
    do
{
    printf("\n1.Insertion");
    printf("\n2.Deletion");
    printf("\n3.Display");
    printf("\n4.Enter Your Choice");
    scanf("%d",&choice);
    clrscr();
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: traverse();
break;
default:printf("Invalid Choice");
}
fflush(stdin);
printf("Do you want to continue");
scanf("%c",&ch);
}
while((ch=='y')||(ch=='Y'));
getch();
}
void push()
{
int item;
printf("Enter the number you want to Insert");
scanf("%d",&item);
if(top==MAX-1)
printf("Stack is Full");
else
{
top++;
stack[top]=item;
}
}
void pop()
{
int item;
if(top==-1)
printf("Stack is empty");
else
{
item=stack[top];
printf("The deleted item is %d",item);
top--;
}
}
void traverse()
{
int i;
if(top==-1)
printf("Stack is empty");
else
{
printf("The elements are");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
}
