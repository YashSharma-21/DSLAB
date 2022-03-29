#include<stdio.h>

int main()
{
    int a[100],i,size,min,secondMin;

    printf("Enter number of elements ");
    scanf("%d",&size);

    printf("\nEnter %d elements ",size);

    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    min=0;

    for(i=1;i<size;i++)
    {
        if(a[i]<a[min])
            min=i;
    }

    for(i=0;a[i]==a[min] && i<size ;i++);

    if(i==size)
    {
        //All elements are equal so we can print anyone
        printf("\nSecond smallest is %d",a[0]);

        return 0;
    }


    secondMin=i;

    for(;i<size;i++)
    {
        if(a[i]==a[min])
            continue;

        else if(a[i]<a[secondMin])
            secondMin=i;
    }

    printf("\nSecond smallest is %d ",a[secondMin]);






    return 0;
}
