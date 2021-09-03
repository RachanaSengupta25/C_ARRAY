#include<stdio.h>
main()
{
	
	int n,i;
	printf("Enter range");
	scanf("%d",&n);
	char a[100][50],b[100][50];
	printf("\nEnter the name of country and capitals\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
	gets(a[i]);
	gets(b[i]);
	}
	printf("\nThe countries and the capitals are\n");
	for(i=0;i<n;i++)
	{
		printf("Country:%s Capital=%s",a[i],b[i]);
		printf("\n");
	}
}

