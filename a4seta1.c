#include <stdio.h>
int main()
{
    int a[100],n,i,key,flag=0;

    printf("Enter limit: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("key found");
    else
        printf("key not found");

}
