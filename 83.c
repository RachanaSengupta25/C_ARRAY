#include<stdio.h>
main()
{
int i,n,m,t,k,j;
printf("Enter the number of rows and columns");
scanf("%d%d",&m,&n);
int a[m][n];
printf("\nEnter the elements in the matrix\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
for(j=0;j<n;j++)
{
	for(i=0;i<m;i++)
	{
	for (k=i+1;k<m;k++)
        {
        if (a[i][j]<a[k][j])
                {
                    t=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=t;
                }
        }
	}
}
 for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
