#include<stdio.h>
main()
{
	int m[20];
	int i,max=m[0],min=m[0];
	printf("Enter 20 numbers");
	for(i=0;i<20;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<20;i++)
	{
		if(m[i]>max)
		max=m[i];
	}
	min=m[0];
	for(i=0;i<20;i++)
	{
		if(m[i]<min)
		min=m[i];
	}
	printf("The greatest number in the array is=%d",max);
	printf("\nThe smallest number in the array is=%d",min);
}
