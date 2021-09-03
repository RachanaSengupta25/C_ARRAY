#include<stdio.h>
main()
{
	int arr[20];
	int i,temp,r,s=0;
	for(i=0;i<20;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<20;i++)
	{
		temp=arr[i];
		while(arr[i]>0)
		{
			r=arr[i]%10;
			s=s*10+r;
			arr[i]=arr[i]/10;
		}
		if(temp==s)
		printf("%d\t",temp);
		s=0;
	}
}
