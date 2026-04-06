#include<stdio.h>
void main()
{
    int num[5]={1,2,3,4,5};
    int i;
    printf("Odd numbers in the array are: ");
    for(i=0;i<5;i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d ",num[i]);
        }
    }
    printf("\n");
    printf("Even numbers in the array are: ");
    for(i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d ",num[i]);
        }
    }
}