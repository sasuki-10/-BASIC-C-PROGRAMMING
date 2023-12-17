#include<stdio.h>
#define max 5

typedef struct stack{
	int data[max];
	int top;
}s;

s s1,*p;

void init()
{
	p=&s1;
	p->top=-1;
}

int full()
{
  if(p->top==max-1 )
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


void push(int x)
{
	if(full()==1)
	{
		return ;
	}
	else
	{
		p->top = p->top+1;
		p->data[p->top]=x;
	}
}

int pop()
{
	int x;
	if(empty()==1)
	{
		return ;
	}
	else{
		x=p->data[p->top];
		p->top=p->top-1;
		return x;
	}
}



int main()
{
	init();
	push(15);
	push(18);
	push(30);
        push(40);
printf(" \n%d",pop());
printf(" \n%d",pop());
printf(" \n%d",pop());
printf(" \n%d",pop());
getch();
}
