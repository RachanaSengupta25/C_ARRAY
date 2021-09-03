#include<stdio.h>
main()
{
	int i,j,n,t;
	printf("Enter a range");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements\n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nAfter sorting the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
