/*smallest number in an array*/
#include<stdio.h>
void main()
{
    int num[5]={10,20,30,40,50};
    int i,smallest;
    smallest=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    printf("The smallest number in the array is: %d",smallest);
}