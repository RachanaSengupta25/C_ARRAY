#include<stdio.h>
main()
{
	int arr[10];
	int i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		printf("%d\t",arr[i]*2);
		else
		printf("%d\t",arr[i]*3);
	}
}
