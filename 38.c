#include<stdio.h>
void SWAP2CHANGE(int p[], int N)
{
	int i,temp;

	for(i=0;i<N;i++)
	{
		if(p[i]%10==0)
		{
		temp=p[i];
		p[i]=p[i+1];
		p[i+1]=temp;
		i++;
	}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t",p[i]);
	}	
}
main()
{
	int p[6];
	int i,temp;
	printf("Enter the numbers");
	for(i=0;i<6;i++)
	{
		scanf("%d",&p[i]);
	}
	SWAP2CHANGE(p,6);	
}
