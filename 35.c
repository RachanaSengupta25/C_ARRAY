#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	printf("Enter number of rows");
	scanf("%d",&r);
	printf("Enter the number of columns");
	scanf("%d",&c);
	printf("\nEnter the elements; \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element[%d,%d]",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nTranspose of matrix \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
}
