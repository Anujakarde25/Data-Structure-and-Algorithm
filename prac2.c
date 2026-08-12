#include<stdio.h>
void main()
{
    int a[20], n, i, max1, max2, sum;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }
    for(i=1; i < n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }
    }
    sum = max1 + max2;
    printf("Largest pair sum = %d", sum);
}
