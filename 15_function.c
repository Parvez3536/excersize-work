#include<stdio.h>
int getadd(int n1,int n2)
{

  return n1+n2;
}

void main()
{
    int n1,n2,sum;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    sum=getadd(n1,n2);
    printf("2 number sum is:%d",sum);
}