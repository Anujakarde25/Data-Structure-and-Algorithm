#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *roll, n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    roll = (int *)malloc(n * sizeof(int));
    if(roll == NULL)
    {
        printf("Memory allocation failed.");
        return;
    }
    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &roll[i]);
    }
    printf("\nRoll Numbers=");
    for(i = 0; i < n; i++)
    {
        printf("\n%d", roll[i]);
    }
    free(roll);
}
