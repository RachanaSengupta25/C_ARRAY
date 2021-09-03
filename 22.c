#include<stdio.h>
#include<math.h>
main()
{
	int i,n,p;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements having perfect square root\n");
	for(i=0;i<n;i++)
	{
	p=sqrt(a[i]);
	if(p*p==a[i])
	{
		printf("%d\t",a[i]);
	}
	}
}
