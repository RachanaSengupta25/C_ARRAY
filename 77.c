#include<stdio.h>
main()
{
int i,n,j=0,k=0;
printf("Enter the number of elements");
scanf("%d",&n);
int A[n],P[n],N[n];
printf("\nEnter the elements in the array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}
for(i=0;i<n;i++)
{
	if(A[i]%2==0 && A[i]>0)
	{
		P[j]=A[i];
		j++;
	}
	if(A[i]%2!=0 && A[i]<0)
	{
		N[k]=A[i];
		k++;
	}
}
for(i=0;i<=j;i++)
{
	printf("%d\t",P[i]);
}
printf("\n");
for(i=0;i<=k;i++)
{
	printf("%d\t",N[i]);
}
}
