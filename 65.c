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
	for(i=0;i<n-1;i++)
	{
    }
printf("\nHighest marks=%d\n",a[i]);
	printf("\nLowest marks=%d\n",a[0]);
}
