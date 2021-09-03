#include<stdio.h>
main()
{
    int a[10],i,sum=0,p=1;
    printf("Enter 30 numbers");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<30;i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of Even values is: %d ",sum);
    for(i=0;i<30;i++)
    {
    	if(a[i]%2!=0)
    	p=p*a[i];
	}
	printf("Product of odd numbers is %d",p);
}
