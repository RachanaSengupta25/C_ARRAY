#include<stdio.h>
main()
{

	int i,temp,n;
	printf("Enter the range");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
	if(i%2==0)
	{
	temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	i++;
	}
}
for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	
}
