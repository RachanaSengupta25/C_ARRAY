#include<stdio.h>
main()
{
	char name[100];
	int arr[25],arr1[25],maths[25],physics[25],chemistry[25];
	int i;
	printf("\nEnter the names of the student\n");
	for(i=0;i<2;i++)
	{
		gets(name);
	}
	printf("\nEnter the maths marks\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&maths[i]);
	}
	printf("\nEnter the physics marks\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&physics[i]);
	}
	printf("\nEnter the chemistry marks\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&chemistry[i]);
	}
	for(i=0;i<2;i++)
	{
		arr[i]=maths[i]+physics[i]+chemistry[i];
		arr1[i]=maths[i]+physics[i]+chemistry[i]/3;
	}
	for(i=0;i<2;i++)
	{
	printf("%s\t%d\t%d",name,arr[i],arr1[i]);
	printf("\n");
}
}
