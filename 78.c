#include<stdio.h>
main()
{
	int n,i,t,j;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<n/2-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After sorting\n");
	for(i=0;i<n/2;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=n/2;i<n;i++)
	{
		for(j=n/2;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=n/2;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
