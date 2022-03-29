#include<stdio.h>

int main()
{
    int a[100],i,size,min;

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

    printf("\nSmallest element is %d ",a[min]);


    return 0;
}
