#include<stdio.h>
main()
{
	int arr[10];
	int i,t,s=0,r;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The Niven numbers are\n");
	for(i=0;i<5;i++)
	{
		t=arr[i];
		s=0;
	while(t>0)
	{
	r=t%10;
	s=s+r;
	t=t/10;
    }
if(arr[i]%s==0)
printf("%d\t",arr[i]);
	}
}
