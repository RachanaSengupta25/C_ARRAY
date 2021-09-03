#include<stdio.h>
void oddEven(int S[],int N)
{
int i;
printf("The original array is\n");
for(i=0;i<N;i++)
{
	printf("%d\t",S[i]);
}
printf("\n");
printf("The modified array is\n");
for(i=0;i<N;i++)
	{
		if(S[i]%2==0)
		printf("%d\t",S[i]+10);//s[i]=s[i]+10;
		else
		printf("%d\t",S[i]+5);
	}	
}
main()
{
	int N;
	int i;
	printf("Enter the range");
	scanf("%d",&N);
	int S[N];
	printf("Enter the numbers");
for(i=0;i<N;i++)
		scanf("%d",&S[i]);
oddEven(S,N);	
}
