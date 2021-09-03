#include<stdio.h>
main()
{
	int sum=0,i;
	float avg;
	int m[]={25,38,49,50,70,59};
	
	for(i=0;i<6;i++)
	{
		sum=sum+m[i];
	}
avg=sum/6.0;
printf("Sum of the marks is=%d\n",sum);
printf("Average marks=%f\n",avg);
}

