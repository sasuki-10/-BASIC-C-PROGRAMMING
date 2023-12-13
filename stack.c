#include<stdio.h>
#define max 5

struct stack{
	int data[max];
	int top;
};

struct stack *p,s1;

void init()
{
	p=&s1;
	p->top=-1;
}

int full()
{
  if(p->top==(max-1))
  {
  	return 1;
  }
  else
  {
  	return 0;
  }
}

int empty()
{
	if(p->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int push(int x)
{
	if(full()==1)
	{
		return 0;
	}
	else
	{
		p->top = p->top+1;
		p->data[p->top]=x;
	}
}

int pop(int x)
{
	if(empty()==1)
	{
		return 0;
	}
	else
	{
		x=p->data[p->top];
		p->top=p->top-1;
		
	}
}

void display()
{
	while(p->top!=max-1)
	{
		printf("%d",p->data[p->top]);
	}
}




int main()
{
	init();
	push(15);
	push(18);
	
	display();
	printf("after pop of 20");
	pop(20);
	display();
}
