#include<stdio.h>
main()
{
	int i,j,c=0,n,f,t;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array\n");
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
	printf("\nAfter sorting the array will be\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter a number that you wanna search\n");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
	if(a[i]==f)
	{
		c++;
		break;
	}	
	}
	if(c>0)
	printf("\n%d is present in %d position\n",f,i+1);
}
