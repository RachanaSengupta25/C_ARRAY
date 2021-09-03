#include<stdio.h>
#include<string.h>
main()
{
	char a[50][50];
	int b[50];
	int i,n;
	printf("Enter the number of friends");
	scanf("%d",&n);
	printf("\nEnter the number of friends and their number\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Name of friend=%s  phone number=%d\n",a[i],b[i]);
	}
}
