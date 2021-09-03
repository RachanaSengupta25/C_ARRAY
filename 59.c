#include<stdio.h>
main()
{
	int n,m,i,j,a[10][10];
	printf("Enter the number os rows and columns");
	scanf("%d%d",&m,&n);
	printf("\nEnter the number of elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==0 || j==0 || i==m-1 || j==n-1)
		{
		printf("%d\t",a[i][j]); 
	    }
	    else
	    printf(" \t");
		}
		printf("\n");
	}
}
