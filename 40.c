#include<stdio.h>
void Get2From1(int arr[],int n) 
{
	int i,j=0,k=0,Even[10],Odd[10];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			Even[j]=arr[i];
			j++;
		}
		else
		{
			Odd[k]=arr[i];
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
	printf("%d\t",Even[i]);
    }	
	for(i=0;i<k;i++)
	{
	printf("\n%d\t",Odd[i]);
    }
}
main()
{
	int n,i;
	printf("Enter the size of array");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		Get2From1(arr,n);
}
