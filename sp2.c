#include<stdio.h>
main()
{
    int n,i,r,e,*ptr;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<38)
        {
            a[c]=a[i];
            c++;
        }
        else {
        r=a[i]%5;
        e=r-1;
        if (r>2)
        {
            b[i]=a[i]+e;
        }
        if(r<=2)
        {
            b[i]=a[i];
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}

