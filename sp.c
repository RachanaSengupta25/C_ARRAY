#include<stdio.h>
main()
{
    int n,i,x;
    printf("Enter a range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&x);
    	if(x>=38 && x%5>=3)
    	{
    		while(x%5!=0)
    		{
    			x++;
			}
		}
		printf("%d",x);
	}
}

