#include<stdio.h>
main()
{
	int arr[10];
	int i;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}
