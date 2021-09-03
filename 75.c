#include<stdio.h>
main()
{
	int i,n,c=0,t,s;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number that you wanna delete");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
		c++;
		s=i;
	    }
	}
	if(c>0)
	{
	 for(i=s;i<n;i++)
	 {
	 	a[i]=a[i+1];
	 }	
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
}
