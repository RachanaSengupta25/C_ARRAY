#include<stdio.h>
main()
{
    int n,m,i,j,a[10][10],t;
    printf("Enter the number of rows and columns of matrix");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of the matrix");
    for(i=0;i<m;i++) 
	{
        for(j=0;j<n;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    int x=m/2,y=m/2+1;
    
    	for(j=0;j<m;j++)
    	{
    	t=a[x-1][j];
		a[x-1][j]=a[y-1][j];
		a[y-1][j]=t;	
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
