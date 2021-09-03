#include<stdio.h>
main()
{
	int a[2][2],i,j;
	printf("Enter the 2d array value\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Show matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
}
