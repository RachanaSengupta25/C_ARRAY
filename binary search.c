#include<stdio.h>
main()
{
	int i,n,f,l,m,s;
	printf("Enter the range of the array");
	scanf("%d",&n);
	printf("\nEnter the elements in the array\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value that you wanna search");
	scanf("%d",&s);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{
		if(a[m]<s)
		f=m+1;
		else if(a[m]==s)
    {
		printf("%d found at location=%d",s,m+1);
		break;
	}
	else
	l=m-1;
	m=(f+l)/2;	
	}
	if(f>l)
	printf("Not found");
}
