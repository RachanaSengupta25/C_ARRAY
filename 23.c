#include <stdio.h>
main()
{
    int arr[10];
    int i,max,min,sum=0;
    float avg;
    printf("Enter elements in the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    for(i=0;i<10;i++)
    {
    	sum=sum+arr[i];
	}
    avg=sum/10.0;
    printf("avg=%f\n",avg);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}
