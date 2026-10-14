#include <stdio.h>
int binarySearch(int a[], int low, int high, int key)
{
    int mid;
    if(low > high)
        return -1;

    mid = (low + high) / 2;

    if(a[mid] == key)
        return mid;
    else if(key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}
int main()
{
    int a[100], n, i, j, temp, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
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

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nEnter key to search: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, n - 1, key);

    if(result==1)
        printf("key is found");
    else
        printf("key is not found");

}
