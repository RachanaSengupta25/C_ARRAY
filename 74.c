#include<stdio.h>
 
void main()
{
    int i,j,m,n,sum=0;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 
    printf("The matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	if(i==j)
            printf("%d\t",a[i][j]);
            else
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
 printf("The sum of diagonal elements of a square matrix=%d\n",sum);
    
}
