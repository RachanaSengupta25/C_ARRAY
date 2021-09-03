#include<stdio.h>
 void Transfer (int A[6], int B[6])
 {
 	int i;
 	for(i=0;i<6;i++)
 	{
 	if(i%2==0)
	printf("%d\t",A[i]);
	else
	printf("%d\t",B[i]);	
	}
	printf("\n");
	for(i=0;i<6;i++)
 	{
 	if(i%2==0)
	printf("%d\t",B[i]);
	else
	printf("%d\t",A[i]);	
	}	
 }
 main()
 {
 	int i;
 	int A[6],B[6];
 	for(i=0;i<6;i++)
 	{
 	scanf("%d",&A[i]);
    }
 	for(i=0;i<6;i++)
 	{
 	scanf("%d",&B[i]);
    }
    Transfer (A,B);
 	
 }
