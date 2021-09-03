#include<stdio.h>
main()
{
	 int i,j,s=0,m,n;
	 printf("Ebter the number of rows and columns");
	 scanf("%d%d",&m,&n);
	 int a[m][n];
	 printf("\nEnter the number of elements\n");
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 for(j=0;j<n;j++)
	 {
	 	for(i=0;i<m;i++)
	 	{
	 		s=s+a[i][j];
		 }
		 printf("\nThe sum of %d column is %d\n",j,s);
		 s=0;
	 }
}
