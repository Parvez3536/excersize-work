/*largest number in an array*/
#include<stdio.h>
void main()
{
    int num[5]={10,20,30,40,50};
    int i,largest;
    largest=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
        }
    }
    printf("The largest number in the array is: %d",largest);
}