#include<stdio.h>
main()
{
	int n,p,z;
	printf("Enter the range\n");
	scanf("%d",&n);
	int arr[n];
	int i,sum,r,a,l,x,y;
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
	a=arr[i];
	z=arr[i];
	l=0;
	while(a>0)
	{
		a=a/10;
		l++;
	}
	
	if(l==5)
	{
	p=z%100;
	x=p%10;
	y=p/10;
	
	while(z>0)
	{
		r=z%10;
		sum=sum+r;
		z=z/10;
	}
	if(x*y==32 && sum==36)
	printf("flappy no = %d\n",arr[i]);
	else
	printf("not flappy no =%d\n",arr[i]);
	
}
else
printf(" %d= number should be 5 digit\n",arr[i]);
}
}
