#include<stdio.h>
main()
{
int n,i,j;
printf("Enter the number of elements in both the arrays");
scanf("%d",&n);
int a[n],b[n];
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
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]==b[j])
		printf("T=%d\t",a[i]);
	}
}
}
