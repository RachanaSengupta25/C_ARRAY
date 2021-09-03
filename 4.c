#include<stdio.h>
#include<string.h>
main()
{
	char a[50][50];
	char b[50];
	int n,i,c,d;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	printf("Enter the names");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a[i]);
	}
	printf("\nEnter the name that you wanna search");
	gets(b);
	//scanf("%s",&b);
	for(i=0;i<n;i++)
	{
		//if(a[i]==b)
		//printf("Found");
		if(strcmp(a[i],b)==0)
		{
			c=1;
			d=i+1;
		}
	}
	if(c==1)
	printf("Element found at %d position",d);
}
