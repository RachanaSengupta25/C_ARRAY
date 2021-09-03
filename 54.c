#include<stdio.h>
void MIX(int a[],int b[],int n,int m)
{
int c[m+n];
int i=0,j=0,k=0,l;
l=(m+n-1);
while(i<n)
{
	if(a[i]%2==0)
	{
		c[k++]=a[i++];
	}
	else
	{
		c[l--]=a[i++];
	}
	}
	while(j<m)
	{
		if(b[j]%2==0)
		{
			c[k++]=b[j++];
		}
		else
		{
			c[l--]=b[j++];
		}
		}
		for(i=0;i<m+n;i++)
		{
			printf("%d\t",c[i]);
			}	
}
main()
{
	int m,n,i;
	printf("Enter the range");
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	printf("\nEnter the elements of first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	MIX(a,b,n,m);
}
