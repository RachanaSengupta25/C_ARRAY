#include<stdio.h>
main()
{
	int m[]={1,2,3,4,5,6,7,8,9,10};
	int i,c=0,j;
	for(i=0;i<10;i++)
	
	{
		for(j=1;j<=m[i];j++)
	{
	if(m[i]%j==0)
	c++;	
	}
	if(c==2)
	printf("%d\t",m[i]);
	c=0;
}
}
