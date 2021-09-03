#include<stdio.h>
main()
{
	int n;
		printf("Enter a range");
	scanf("%d",&n);
	int arr[n];
	int i,r,t,num,s=0;
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		s=0;
		t=arr[i];	
		while(arr[i]>9)
	{
		num=arr[i];
		s=0;
		while(num>0)
		{
			r=num%10;
			s=s+r;
			num=num/10;
		}
		arr[i]=s;
	}
	if(s==1)
	printf("%d = Magic no\n",t);
	else
	printf("%d= not magic\n",t);
	}
}
