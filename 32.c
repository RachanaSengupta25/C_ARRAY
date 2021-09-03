#include<stdio.h>
main()
{
	int i,n,r,s=0,t;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n],b[10];
	printf("\nEnter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		while(a[i]>9)
		{
			n=a[i];
			t=a[i];
			s=0;
			while(n>0)
			{
				r=n%10;
				s=s+r*r;
				n=n/10;
			}
			a[i]=s;
		}
		if(s==1)
		{
		b[i]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
