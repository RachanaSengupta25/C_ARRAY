#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number of boxes to be packed");
	scanf("%d",&n);
	if(n<1 || n>1000)
	{
		printf("Invalid input");
	}
	else
	{
		int cart[]={48,24,12,6};
		int t=n,total=0,c=0;
		for(i=0;i<4;i++)
		{
			c=n/cart[i];
			if(c!=0)
			{
				printf(" %d * %d = %d\n",cart[i],c,cart[i]*c);
			}
			total=total+c;
			n=n%cart[i];
		}
		if(n>0)
		{
			printf("Remaining box=%d*1=%d\n",n,n);
			total=total+1;
		}
		else
		{
			printf("Remaining box=0\n");
		}
		printf("Total number of boxes=%d\n",t);
		printf("Total number of carton=%d\n",total);
	}
}
