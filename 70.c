#include<stdio.h>
main()
{
int n,i,j,k;
printf("Enter the number of elements in both the arrays");
scanf("%d",&n);
int a[n],b[n],c[10];
printf("\nEnter the elements of first array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nEnter the elements of second array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<10;i++)
{
	if(i%2==0)
	c[i]=a[i];
    else
    c[i]=b[i];
}
for(i=0;i<10;i++)
{
	printf("%d\t",c[i]);
}
}
