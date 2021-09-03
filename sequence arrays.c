#include<stdio.h>
main()
{
int i,c=0,d,k=0,j,n=0,p=0,l=0; 
printf("Enter the range of the array");
scanf("%d",&j);
int a[j];
for(i=0;i<j;i++)
{
	printf("Enter the element");
	scanf("%d",&a[i]);
}
for(i=0;i<j;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");
for(i=0;i<j;i++)
{
	if(a[k]==0)
	{
		c++;
	}
	d=c;
	if(a[k]!=0)
	{
		c=0;
	}
	k++;
	if(d>n)
	{
		n=d;
	}
}
c=0;
for(i=0;i<j;i++)
{
	if(a[l]==1)
	{
		c++;
	}
	d=c;
	if(a[l]!=1)
	{
		c=0;
	}
	l++;
	if(d>p)
	{
		p=d;
	}
}
if(p>n)
{
	printf("1=  %d",p);
}
if(n>p)
{
	printf("0=  %d",n);
}
if(n==p)
{
	printf("Both are same");
}
}
