#include<stdio.h>
main()
{
	int n,i,j,t;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After bubble sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
