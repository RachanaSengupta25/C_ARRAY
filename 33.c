#include<stdio.h>
main()
{
    int n,m,i,j,a[10][10],b[10][10],s[10][10],d[10][10];
    printf("Enter the number of rows and columns of matrix");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of the first matrix");
    for(i=0;i<m;i++) 
	{
        for(j=0;j<n;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the second matrix");
    for(i=0;i<m;i++) 
	{  
        for(j=0;j<n;j++) 
		{  
            scanf("%d",&b[i][j]);
        }
     }   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe sum is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nThe difference is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}
