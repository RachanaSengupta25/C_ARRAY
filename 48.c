#include<stdio.h>
main()
{
  int a[5];
  int i,temp;
    printf("Enter the elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    temp=a[5-1];
    for(i=5-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("\nNew array after rotating by one postion in the right direction\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}

