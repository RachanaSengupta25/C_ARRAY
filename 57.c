#include<stdio.h>
main()
{
	int n,j=0,l,i=0;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\nEnter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=n-1;
	i=0;
	while(i<n)
	{
		if(a[i]<0)
		{
			b[j++]=a[i++];
		}
		if(a[i]==0)
		{
			b[l--]=a[i++];
		}
	}
		for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}	
}
