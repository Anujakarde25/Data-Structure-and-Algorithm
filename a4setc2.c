#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char name[10][30], key[30];
    int roll[10];
    int n = 0, low, high, mid, found = 0;

    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while(fscanf(fp, "%s %d", name[n], &roll[n]) != EOF)
    {
        n++;
    }

    fclose(fp);

    printf("Enter student name: ");
    scanf("%s", key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(name[mid], key) == 0)
        {
            printf("Roll No = %d", roll[mid]);
            found = 1;
            break;
        }
        else if(strcmp(key, name[mid]) < 0)
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
        printf("Student name not in the list");
    }
}
