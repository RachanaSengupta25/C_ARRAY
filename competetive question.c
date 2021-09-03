#include<stdio.h>
main()
{
	int n,m,i,j,r,c,k,l;
	printf("Enter the numbers of rows and columns");
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter the element[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the row number");
	scanf("%d",&r);
	printf("Enter the column number");
	scanf("%d",&c);
	for(i=r-1;i<=r+1;i++)
		{
			for(j=c-1;j<=c+1;j++)
			{
				if((j>=0 && j<m) && (j!=c ||i!=r) && (i>=0 && i<n))
				{
					printf("%d",a[i][j]);
				}
			}
		
		}
		/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==r && j==c)
			{
				if(r!=0 && c!=0 && r!=n-1 && c!=m-1)
				{
				for(k=0;k<n;k++)
	           {
		          for(l=0;l<m;l++)
		{
			if((k==r && l==c+1) || (k==r && l==c-1) || (k==r-1 && l==c) || (k==r+1 && l==c)) 
			{
			printf("%d\t",a[k][l]);
		    }
			else
			printf(" ");
		}
		
	          }
			   }
		if(r==0 && c==0)
			{
				for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c+1) || (k==r+1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}
		}
			if(r==0 && c==m-1)
			{
				for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c-1) || (k==r+1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}
			}
			if(r==0 && c!=0 && c!=m-1)
			{
				for(k=0;k<n;k++)
				{
                    for(l=0;l<m;l++)
                    {
					
				if((k==r && l==c-1) || (k==r+1 && l==c) || (k==r && l==c+1))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}
			} 
			if(r==n-1 && c==0)
			{
					for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c+1) || (k==r-1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}	
			} 
	if(r==n-1 && c==m-1)
			{
					for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c-1) || (k==r-1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}	
			} 
	if(r==n-1 && c!=0 && c!=m-1)
			{
					for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c-1) || (k==r-1 && l==c) || (k==r && l==c+1))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}	
			}  
			  	if(r!=n-1 && c==0 && r!=0)
			{
				for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c+1) || (k==r+1 && l==c) || (k==r-1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}
			}  
				  	if(r!=n-1 && c==m-1 && r!=0)
			{
				for(k=0;k<n;k++)
				{
				for(l=0;l<m;l++)
				{
				if((k==r && l==c+1) || (k==r+1 && l==c) || (k==r-1 && l==c))
				{
					printf("%d ",a[k][l]);
				}
				else
				{
					printf("");
				}
			}
			}
			} */
			
			}	    
			//}			
			//}

