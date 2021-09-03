#include<stdio.h>
main()
{
	int i,n,j,f=0;
	printf("Enter the range");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<n/2;j>=n/2,i++,j--)
	 {
      if(a[i]!=a[j]) 
	  {
         f=1;
         break;
      }
   }
   if (f==0)
   printf("Palindrome number");
   else
   printf("Non palidrome number");
}

