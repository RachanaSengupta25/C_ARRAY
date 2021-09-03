#include<stdio.h>
main()
{
	int arr[5];
	int i,t,r,sum,s,c;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		t=arr[i];
		sum=0;
		c=0;
		s=0;
		while(arr[i]>0)
{
	r=arr[i]%10;
	arr[i]=arr[i]/10;
	c++;
	s=r*c;
	sum=sum+s;
}
if(sum%11==0 && c==10)
printf("%d\t",t);
	}
}
