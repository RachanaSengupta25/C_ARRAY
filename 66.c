#include<stdio.h>
main()
{
	int i,j,m,n,t,k;
	printf("Enter the number of rows and columns");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("\nEnter the elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nBefore soting\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	printf("\nAfter sorting\n");
	 for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=(j+1);k<n;k++)
            {
                if (a[i][j]>a[i][k])
                {
                    t=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=t;
                }
            }
        }
    }
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
}
