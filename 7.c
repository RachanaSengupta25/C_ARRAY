#include<stdio.h>
#include<string.h>
main()
{
	char a[50][50];
	int b[50];
	int i,n,d,temp;
	printf("Enter the number of cricketers");
	scanf("%d",&n);
	printf("\nEnter the name of the player and the run");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a[i]);
		scanf("%d",&b[i]);
	}
	temp=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>temp)
		{
			temp=b[i];
			d=i;
		}
		printf("%s has scored %d runs and it's the highest",a[d],temp);
	}
	
}
