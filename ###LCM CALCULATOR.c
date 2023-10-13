#include<stdio.h>
int main()
{
int n,m,max;
printf("enter the value:");
scanf("%d",&n);
printf("enter the value:");
scanf("%d",&m);
if(n>m)
{
    max=n;
}
else
{
    max=m;
}
   while(1)          //tells the loop will run to infinite time until the given condition is true
   {
    if((max%n==0)&&(max%m==0))
    {
        printf("THE LCM OF %d and %d is:%d",n,m,max);
        break;
    }
    max++;
    
    }
}
