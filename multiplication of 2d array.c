#include<stdio.h>
main()
{
	int n,m,i,j,k,s=0;
	printf("Enter the value of row and column");
	scanf("%d%d",&n,&m);
	int a[n][m],b[n][m],c[n][m];
	printf("\nEnter the number of first matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nEnter the number of second matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			c[i][j]=s;
			s=0;
		}
	}
		printf("\nThe multiplication of the given matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
