#include<stdio.h>
main()
{
	int arr[20];
	int i,firstnum,r,lastnum,s;
	printf("Enter the numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		lastnum=arr[i]%10;
		while(arr[i]>10)
		{
			arr[i]=arr[i]/10;
		}
		firstnum=arr[i];
		s=firstnum+lastnum;
		printf("%d\t",s);
	}
}
