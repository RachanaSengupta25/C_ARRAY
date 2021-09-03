#include<stdio.h>
main()
{
	int n,i,f=1,j;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		f=1;
		for(j=1;j<=i+1;j++)
		{
			f=f*j;
		}	
	arr[i]=f;
		
	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",arr[i]);	
	}
}
