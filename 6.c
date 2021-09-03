#include<stdio.h>
main()
{
	float f[10],c[10];
	int i;
	printf("Enter 10 different temperatures in Farenheit:");
	for(i=0;i<10;i++)
	{
		scanf("%f,",&f[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=((5*(f[i]-32))/9.0);
		printf("%f,",c[i]);
	
	}
	
}

