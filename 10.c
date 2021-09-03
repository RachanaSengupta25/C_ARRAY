#include<stdio.h>
main()
{
	int m[10];
	int i,n,c=0;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("Enter a number that you wanna search");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(m[i]==n)
		c++;
	}
	if(c>=1)
	printf("Number found");
	else
	printf("Not found");
}
