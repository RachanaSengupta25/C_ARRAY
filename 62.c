#include<stdio.h>
 void ADD (int a[],int b[])
 {
 	int i,m,n,j,s[100][100];
 for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe sum is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
 }
void SUB (int a[],int b[])
 {
 	int i,m,n,j,d[100][100];
  for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nThe difference is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }	
 }
void MUL (int a[],int b[])
 {
 	int i,m,n,j,c[100][100];
 for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			c[i][j]=s;
			s=0;
		}
	}
		printf("\nThe multiplication of the given matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}	
 }
 main()
 {
 	int n,m,i,j,a[10][10],b[10][10],operation;
    printf("Enter the number of rows and columns of matrix");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++) 
	{  
        for(j=0;j<n;j++) 
		{  
            scanf("%d",&a[i][j]);
        }
     } 
     for(i=0;i<m;i++) 
	{  
        for(j=0;j<n;j++) 
		{  
            scanf("%d",&b[i][j]);
        }
     } 
	  printf("please choose what you want to do with your values\n");
      scanf("%d",&operation);
      switch(operation)
    {
      case 1:
      ADD (a,b);
        break;
    case 2:
       SUB (a,b);
        break;
    case 3:
        MUL (a,b);
        break;  
 }
