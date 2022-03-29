#include<stdio.h>

int main()
{
    int a[100],i,size,max,secondMax;

    printf("Enter number of elements ");
    scanf("%d",&size);

    printf("\nEnter %d elements ",size);

    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    max=0;

    for(i=1;i<size;i++)
    {
        if(a[i]>a[max])
            max=i;
    }

    for(i=0;a[i]==a[max] && i<size ;i++);

    if(i==size)
    {
        //All elements are equal so we can print anyone
        printf("\nSecond greatest is %d",a[0]);

        return 0;
    }


    secondMax=i;

    for(;i<size;i++)
    {
        if(a[i]==a[max])
            continue;

        else if(a[i]>a[secondMax])
            secondMax=i;
    }

    printf("\nSecond greatest is %d ",a[secondMax]);






    return 0;
}
