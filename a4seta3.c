#include <stdio.h>
int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
            return mid;
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return 1;
}

int main()
{
    int a[100], n, i, j, temp, key, result;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("enter array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nEnter key to search: ");
    scanf("%d", &key);

    result = binarySearch(a, n, key);

    if(result != 1)
        printf("key found");
    else
        printf("key is not found");

}
