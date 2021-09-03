#include<stdio.h>
main()
{
int n,i;
printf("Enter the range");
scanf("%d",&n);
int a[n];
printf("Enter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");
for(i=n/2;i<n;i++)
{
	printf("%d\t",a[i]);
}
}
