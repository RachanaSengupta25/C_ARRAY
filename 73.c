#include<stdio.h>
main()
{
	int i,j,n,m,s=0;
	printf("Enter the number of elemnt of the first array");
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements in the second array");
	scanf("%d",&n);
	char b[n];
	for(i=0;i<n;i++)
	{
	scanf("%c",&b[i]);
	}
	for(i=0;i<n;i++){
	switch(b[n])
	{
		case '+':
			s=a[0]+a[1];
			break;
		case '-':
			s=s-a[2];
		    break;
		case '*':
			s=s*a[3];
			break;	
	}
}
printf("%d",s);
}
