#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int element,i,loc,size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter %d array elements\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("List before Insertion: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter an element to insert\n");
    scanf("%d",&element);
    printf("Enter a position to insert an element %d\n",element);
    scanf("%d",&loc);
    loc--;
    for(i=size-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=element;
    printf("\nList after Insertion: ");
    for(i=0;i<size+1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

