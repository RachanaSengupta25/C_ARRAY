#include<stdio.h>
main()
{
	int arr[40];
	int i,temp,r,s=0;
	printf("Enter the numbers");
	for(i=0;i<40;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<40;i++)
	{
		temp=arr[i];
		while(arr[i]>0)
		{
			r=arr[i]%10;
			s=s+(r*r*r);
			arr[i]=arr[i]/10;
		}
		if(temp==s)
		printf("%d\t",temp);
		s=0;
	}
}
