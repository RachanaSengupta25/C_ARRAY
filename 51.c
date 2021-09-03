#include<stdio.h>
int merge(int a[], int b[], int m, int n)
{
int c[100],t;
int k=0,i,j;
for(i=0;i<m;i++)
{
c[k]=a[i];
k++;	
}	
for(i=0;i<n;i++)
{
	c[k]=b[i];
	k++;
}
printf("\nThe merged array before sorting");
for(i=0;i<m+n;i++)
{
	printf("%d",c[i]);
}
for(i=0;i<m+n;i++)
{
	for(j=0;j<(m+n)-1;j++)
	{
		if(c[j]>c[j+1])
		{
			t=c[j];
			c[j]=c[j+1];
			c[j+1]=t;
		}
	}
}
printf("\nThe array after sorting is\n");
for(i=0;i<m+n;i++)
{
	printf("%d",c[i]);
}
}
main()
{
	int a[50],b[50];
	int m,n,i;
	printf("Enter the range of first array\n");
	scanf("%d",&m);
	printf("Enter the range of the second array");
	scanf("%d",&n);
	printf("\nEnter the elements of the first array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements of the second array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,b,m,n);
}
