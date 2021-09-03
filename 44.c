#include<stdio.h>
void reverse(int arr[9])
{
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d\t",arr[8-i]);
	}
}
main()
{
	int arr[9];
	int i;
	printf("Enter the elements");
	for(i=0;i<9;i++)
	
		scanf("%d",&arr[i]);
reverse(arr);
	
}
