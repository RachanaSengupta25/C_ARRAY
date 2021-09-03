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
	printf("\nEven numbers are");
		for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		printf("%d\t",arr[i]);
	}
	printf("\nOdd numbers are");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		printf("\n%d\t",arr[i]);
	}
	
}
