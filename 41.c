#include<stdio.h>
void  CHANGE(int a[],int n)
{
int i;
for(i=0;i<n;i++)
    {
	   if(a[i]%7==0)
	   { 
	    printf("%d\t",a[i]/7);
	   }
	   else
	   {
	   	printf("%d\t",a[i]*3);
	   }
	}	
}
main()
{
	int i,n;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	CHANGE(a,n);
}

