#include<stdio.h>
main()
{
	int n,i,j,t,c=0,s;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n-1;i++)
{
	for(j=i;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
	printf("After selection sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the number that you wanna search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
			if(a[i]==s)
			c++;
	}
	if(c>=1)
	printf("Number is present");
	else
	printf("Number not present");
}
