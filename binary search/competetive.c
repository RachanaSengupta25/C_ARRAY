#include<stdio.h>
main()
{
	int n=5,m,i,j,a[5][5],count=0,p;
	printf("\nEnter the number of elements\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==a[i][j+1])
			{
			  count++; 
			  if(count==4)
		    {
			p=a[i][j];
		    }	
			}	
		}
		count=0;
	}
	while(n>0)
	{
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==a[i][j+1])
			{
			  count++; 	
			  if(count==4 && a[i][j]<=p)
		    {
			p=a[i][j];
		    }
			}
		}
	}
	count=0;
	n--;
	}//checking row wise
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i][j]==a[i][j+1])
			{
			  count++; 
			  if(count==4)
		    {
			p1=a[i][j];
		    }	
			}	
		}
	}
	n=5;
	while(n>0)
	{
		for(j=1;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i][j]==a[i][j+1])
			{
			  count++; 	
			  if(count==4 && a[i][j]<=p1)
		    {
			p1=a[i][j];
		    }
			}
		}
	}
	count=0;
	n--;
	}
	//checking column wise
	i=0;
	j=0;
	while(i<5 && j<5)
	{
		if(a[i]==a[j])
		{
			count++; 	
			  if(count==4)
		    {
			p1=a[i][j];
		    }
		}
		if(a[5-i]==a[5-j])
		{
			count++; 	
			  if(count==4)
		    {
			p1=a[i][j];
		    }
		}
		i++;
		j++;
	}
	printf("%d",p);
}
