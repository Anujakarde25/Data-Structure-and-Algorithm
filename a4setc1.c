#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char city[10][30], key[30];
    int std[10];
    int n = 0, low, high, mid, found = 0;

    fp = fopen("cities.txt", "r");
    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    while(fscanf(fp, "%s %d", city[n], &std[n]) != EOF)
    {
        n++;
    }

    fclose(fp);
    printf("Enter city name: ");
    scanf("%s", key);

    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(city[mid], key) == 0)
        {
            printf("STD Code = %d", std[mid]);
            found = 1;
            break;
        }
        else if(strcmp(key, city[mid]) < 0)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(found == 0)
    {
        printf("City not found ");
    }

}
