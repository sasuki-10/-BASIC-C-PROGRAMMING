#include<stdio.h>
#include<stdlib.h>
#define null 0

struct node{
	int data;
	struct node *next;
	
};
 struct node *first,*temp,*ttemp,*p;


void create_first(int value)
{

	first=(struct node *) malloc(sizeof(struct node));
	first->data=value;
	first->next=null;
	printf("\n\nVALUE INSTERTED");
}

void addnode(int value)
{
 temp=first;
 while(temp->next!=null)
 {
  temp=temp->next;
 }
 ttemp=(struct node*)malloc(sizeof(struct node));
 ttemp->data=value;
 ttemp->next=null;
 temp->next=ttemp;
 printf("NODE INSERTED");	
 }

void display()
{
	temp=first;
	while(temp!=null)
	{
		printf("\ndata--> %d",temp->data);
		temp=temp->next;
	}
}

void sum()
{
	int s=0;
	temp=first;
	while(temp!=null)
	{
		s=s+temp->data;
		temp=temp->next;
	}
	printf("\nsum is %d",s);
}

int main()
{
int n;
char i;
	printf("\n\nENTER THE VALUE:");
	scanf("%d",&n);
	create_first(n);    //no void because it will not return function......
	while(1)
	{
		printf("\n\nDO YOU WANT TO CONTINUE:");
		scanf(" %c",&i);
		if(i=='n'||i=='N')
		break;
		printf("\n\nENTER THE DATA YOU WANT TO ENTER:");
		scanf("%d",&n);
		addnode(n);
         }
	        printf("\n\nTHIS IS YOUR FINAL LIST....\n");
		display();
		sum();
                
	return 0;
}
