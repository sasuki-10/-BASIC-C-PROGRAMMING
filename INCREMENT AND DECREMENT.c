#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	a=b;
	printf("a=b%d",a);
	
	a+=b;                      //a=a+b
	printf("\na+=b%d",a);
	
	a-=b;                      //a=a-b
	printf("\na-=b%d",a);
	
	a*=b;
	printf("\na*=b%d",a);
	
	a/=b;
	printf("\na/=b%d",a);
	
	return 0;
	
}
