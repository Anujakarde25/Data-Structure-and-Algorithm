#include <stdio.h>
int binarySearch(int a[], int low, int high, int key)
{
    int mid;

    if(low>high)
    mid=(low+high)/2;

    if(a[mid]==key)
        return mid;
    else if(key<a[mid])
        return binarySearch(a,low,mid-1,key);
    else
        return binarySearch(a, mid + 1,high, key);
} 

int main()
{
    int a[100],n,i,key,result;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter key to found: ");
    scanf("%d",&key);

    result=binarySearch(a,0,n-1,key);

    if(result !=1)
        printf("key is found ");
    else
        printf("key not found");

}
