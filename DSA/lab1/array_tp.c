#include <stdio.h>
int main() 
{
    int n,e;
    float avg;
    printf("enter number of elements of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("which element to search:");
    scanf("%d", &e);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == e)
        {
            printf("element %d found at index %d\n", e, i);
            break;
        }
        else if(i == n-1)
            printf("element not found\n");
    }
    int max = arr[0],min = arr[0],sum=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        if(arr[i] == e)
            printf("element %d found at index %d\n", e, i);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("maximum element:%d\n", max);
    printf("minimum element:%d\n", min);
    printf("average of elements:%f\n", avg);
    return 0;
}