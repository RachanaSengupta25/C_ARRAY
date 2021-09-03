#include<stdio.h>
main()
{
	int m[]={68,35,19,55,91,29};
	int i,max=m[0];
	for(i=0;i<6;i++)
	{
		if(m[i]>max)
		max=m[i];
	}
	printf("The greatest number in the array is=%d",max);
}

