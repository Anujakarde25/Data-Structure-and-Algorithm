#include <stdio.h>
#include <string.h>
void accept(int n1, char c1[20][20])
{
    int i;
    for(i=0; i<n1; i++)
    {
        printf("Enter City Name : ");
        scanf("%s", c1[i]);
    }
}
void search(int n1, char c1[20][20], char s1[20])
{
    int i;
    for(i=0; i<n1; i++)
    {
        if(strcmp(s1,c1[i])== 0)
        {
            printf("City= %s",c1[i]);
            break;
        }
    }
    if(i==n1)
    {
        printf("City Not Found");
    }
}
int main()
{
    int n1;
    char c1[20][20],s1[20];
    printf("Enter Limit : ");
    scanf("%d", &n1);
    accept(n1, c1);
    printf("Enter City Name to Search : ");
    scanf("%s", s1);
    search(n1, c1, s1);
}
