#include<stdio.h>
main()
{
int i,j=0,n;
printf("Enter the range");
scanf("%d",&n);
int a[10],b[5];
printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<10;i+2)
{
	b[j]=a[i]+a[i+1];
	j++;
}
for(i=0;i<n/2;i++)
{
	printf("%d",b[i]);
}
}
