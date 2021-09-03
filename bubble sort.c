/*#include<stdio.h>
main()
{
	int n,i,j,t;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After bubble sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}*/
#include <stdio.h>
int a[10000];
void add(int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
printf("\n%d",a[0]+a[1]);
}
int main(void) {
	// your code goes here
	int n,i,j,n1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&n1);
	    for(j=0;j<n1;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    add(n1);
	}
	return 0;
}


