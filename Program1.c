#include<stdio.h>

int main()
{
    int a[100],i,size,max;

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

    printf("\nLargest element is %d ",a[max]);


    return 0;
}
