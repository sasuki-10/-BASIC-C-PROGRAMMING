#include<stdio.h>
int main()
{
    int n,temp,i,sum=0;
    printf("ENTER THE VALUE: ");
    scanf("%d",&n);
    temp=n;
    do
    {
        i=n%10;
        sum=sum+i;
        n/=10;
    }
     while(n!=0);
    temp=n;
    if(n%sum==0)
    {
     printf("Number is Harshad and Total digit is :%d",sum);   
    }
    else
    {
      printf("Number NOT is Harshad and Total digit is :%d ",sum);  
    }
}
