#include<stdio.h>
int Get1From2(int a[],int b[],int n)
{
	int i,j=0,k=0,ALL[n*2];
	for(i=0,j=0;i<n*2;i++,j=j+2)
	{
	ALL[j]=a[i];	
		
	}
	for(i=0,j=1;i<n*2;i++,j=j+2)
	{
	ALL[j]=b[i];	
		
	}
	for(i=0;i<n*2;i++)
	{
		printf("%d\t",ALL[i]);
	}
}
main()
{
	int n,i;
	printf("Enter range");
	scanf("%d",&n);
	int a[n],b[n],ALL[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
Get1From2(a,b,n);		
}

