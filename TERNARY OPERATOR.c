#include<stdio.h>
int main()
{
    int a,b;
  printf("Enter a:");          //KEY CONCEPT;ternary operator{(condition)?check1:check2}
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	(a>=b)?printf("a is bigger"):printf("b is bigger");
	printf("\nTHANK YOU ^_^");
	return 0;
}
