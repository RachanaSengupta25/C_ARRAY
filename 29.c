#include<stdio.h>
main()
{
	int i,n,c=0,t,s;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number that you wanna search");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
		c++;
		s=i+1;
	}
	}
	if(c>=1)
	printf("Number is present at %d position",s);
	else
	printf("Number not found");
}
