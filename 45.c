#include<stdio.h>
main()
{
	int arr[5];
	int i,c=0,d=0,e=0,f=0,g=0;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]>0)
		c++;
		if(arr[i]==0)
		d++;
		if(arr[i]<0)
		e++;
		if(arr[i]%2==0)
		f++;
		if(arr[i]%2!=0)
		g++;
	}
	printf("positive number=%d,zero=%d,Negative number=%d,even number=%d,oddnumber=%d",c,d,e,f,g);
}
