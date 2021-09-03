#include<stdio.h>
main()
{

	int i,temp,n,m;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=n/2;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[i+m];
		a[i+m]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
