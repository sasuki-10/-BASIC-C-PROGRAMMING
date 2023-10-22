#include<stdio.h>
int main()
{
    int arr1[5],i;
    int arr2[5];
    int arr3[5];
    printf("INSERT THE FIRST ARRAY VALUE-->");
    for(i=0;i<5;i++)
    {
        printf("\na1[%d]= ",i);
        scanf("%d",& arr1[i]);
    }
    
    printf("INSERT THE SECOND ARRAY VALUE-->");
    for(i=0;i<5;i++)
    {
        printf("\na2[%d]= ",i);
        scanf("%d",&arr2[i]);
        
    }
    
    printf("SUM OF AN ARRAY VALUE-->");
    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("a3[%d]=%d\n",i,arr3[i]);
        
    }
 
    return 0;
}
