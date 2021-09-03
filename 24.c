#include<stdio.h>
main()
{
	int arr[3];
	int i,j,s=0,f=1,t,r;
	printf("Enter the numbers");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++)
	{
	t=arr[i];
 {
 	while(arr[i]>0)
 	{
 		r=arr[i]%10;
 		f=1;
 		for(j=1;j<=r;j++)
 		{
 			f=f*j;
		 }
		 s=s+f;
		 arr[i]=arr[i]/10;
	 } 
 }
 if(s==t)
	 printf("%d\t",t);
	 	s=0;
f=1;	
}
}
