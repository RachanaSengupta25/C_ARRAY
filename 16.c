#include<stdio.h>
main()
{
	int m[]={1,2,3,4,5,6,7,8,9,10};
	int i,max=m[0],min=m[0];
for(i=0;i<10;i++)
{
		if(m[i]>max)
		max=m[i];
}
min=m[0];
for(i=0;i<10;i++)
{
	if(m[i]<min)
	min=m[i];
}
printf("%d",max);
printf("\n%d",min);
}
