//checking the largest number..
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:  ");
	scanf("%d",&a);
	printf("enter the value of b:  ");
	scanf("%d",&b);
	printf("enter the value of c:  ");
	scanf("%d",&c);
	(a>b&&c)?printf("a is largest"):(b>a&&c)?printf("b is largest"):printf("c is biggest");
}
