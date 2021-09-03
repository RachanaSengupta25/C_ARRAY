#include<stdio.h>
void  Convert(int T[],int Num)
{
	int i,temp;
		temp=T[0];
for(i=0;i<Num-1;i++)
	{
	
		T[i]=T[i+1];
	
		
	}	
		T[i]=temp;
		for(i=0;i<Num;i++)
		{
		printf("%d\t",T[i]);	
		}
}
main()
{
	int Num,i;
	printf("Enter the range");
	scanf("%d",&Num);
	int T[Num];
	printf("Enter the numbers");
		for(i=0;i<Num;i++)
	scanf("%d",&T[i]);
	Convert(T,Num);	
}

